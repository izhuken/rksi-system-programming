#include <iostream>
#include "animal.h"

using namespace std;

/*
1. Перегрузите операторы ++ и --, которые будут увеличивать/уменьшать рост у Human на 10.
Перегрузите операторы &lt; и &gt; у Human для сравнения по росту. Перегрузите оператор
вывода в cout для класса Human.
2. Добавьте в конструкторы, где это необходимо, в качестве параметров данные из
перечисления.
3. Продемонстрируйте работу внесенных изменений в main.
*/

int main()
{
    Animal *animal_1 = new Animal("Bars", "Cat", "Gray", AnimalAge::Bars, 150000);
    Animal *animal_2 = new Animal("Puma", "Rat", "Black", AnimalAge::Puma, 450);

    cout << *animal_1 << endl;
    cout << *animal_2 << endl;
    cout << "Больше весит животное: ";

    if (*animal_1 > *animal_2)
        cout << animal_1->getName() << ". Масса: " << animal_1->getWeight() << endl;
    else
        cout << animal_2->getName() << ". Масса: " << animal_2->getWeight() << endl;

    ++*animal_1;
    cout << *animal_1;

    --*animal_2;
    cout << *animal_2;

    (*animal_1)--;
    cout << *animal_1;

    (*animal_2)++;
    cout << *animal_2;

    delete animal_1;
    delete animal_2;
}
