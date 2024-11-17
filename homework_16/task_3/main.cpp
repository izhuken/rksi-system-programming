#include <iostream>
#include "pet.h"
#include "wild.h"

using namespace std;

/*
1. Перепишите все const char* в классе Animal через std::string.
2. Перепишите конструкторы через списки инициализации, добавьте в конструкторы с
неполными набором полей значения по умолчанию, проинициализируйте их через
делегирование конструкторов.
3. Добавьте проверки корректности вносимых данных в конструкторы и сеттеры, используя
методы работы со строкой.
4. Продемонстрируйте работу внесенных изменений в main.
*/

int main()
{
    Wild *wild_1 = new Wild("Coco", "Monkey", "Black", 19, 150000, "Jungle");
    wild_1->displayWild();

    Wild *wild_2 = new Wild("Coco", "Monkey", "Black", 19, 150000, "SA");
    wild_2->displayWild();

    Wild *wild_3 = new Wild("Coco", "Monkey", "Black", 19, 150000, "Africa");
    wild_3->displayWild();

    Pet *pet_1 = new Pet("Puma", "Rat", "Black", 19, 450, false);
    pet_1->displayPet();

    Pet *pet_2 = new Pet("Milka", "Rat", "Black", 19, 450, false);
    pet_2->displayPet();

    Pet *pet_3 = new Pet("Bulka", "Rat", "Black", 19, 450, false);
    pet_3->displayPet();

    delete wild_1;
    delete wild_2;
    delete wild_3;
    delete pet_1;
    delete pet_2;
    delete pet_3;
    return 0;
}
