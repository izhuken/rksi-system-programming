#include <iostream>
#include "pet.h"
#include "wild.h"

using namespace std;

/*
1. Обозначьте необходимые функции в родительском классе виртуальными, при необходимости переопределите их в
дочерних классах (реализация полиморфизма).
2. Дополните дочерние классы деструкторами.
3. Продемонстрируйте работу внесенных изменений в main с помощью массива, указателей и цикла For:
создайте по 2 объекта дочерних классов (1 статический, 1 динамический) и примените к ним переопределенные функции.

*/

int main()
{
    Wild *wild_1 = new Wild("Coco", "Monkey", "Black", 19, 150000, "Jungle");
    Wild wild_2 = Wild("Coco", "Monkey", "Black", 19, 150000, "SA");
    Pet *pet_1 = new Pet("Puma", "Rat", "Black", 19, 450, false);
    Pet pet_2 = Pet("Milka", "Rat", "Black", 19, 450, false);

    Animal **array = new Animal *[4]{wild_1, &wild_2, pet_1, &pet_2};
    Animal *array_2[4] = {wild_1, &wild_2, pet_1, &pet_2};

    for (int i = 0; i < 4; ++i)
    {
        array[i]->printInfo();
        delimiter();
    }

    delimiter();

    for (int i = 0; i < 4; ++i)
    {
        array_2[i]->printInfo();
        delimiter();
    }

    delete wild_1;
    delete pet_1;
    delete[] array;

    return 0;
}
