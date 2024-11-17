#include <iostream>
#include "human.h"

using namespace std;

/*
1. Перегрузите операторы ++ и --, которые будут увеличивать/уменьшать вес у Animal на 52.
Перегрузите операторы &lt; и &gt; у Animal для сравнения по весу. Перегрузите оператор
вывода в cout для класса Animal.
2. Добавьте в конструкторы, где это необходимо, в качестве параметров данные из
перечисления.
3. Продемонстрируйте работу внесенных изменений в main.
*/

int main()
{
    Human *human_1 = new Human("Petr", "Sidorov", HumanAge::Anna, 79.3, 178);
    Human *human_2 = new Human("Anna", "Ivanova", HumanAge::Anna, 65.2, 170);

    cout << *human_1 << endl;
    cout << *human_2 << endl;
    cout << "Больше рост человека: ";

    if (*human_1 > *human_2)
        cout << human_1->getName() << ". Рост: " << human_1->getHeight() << endl;
    else
        cout << human_2->getName() << ". Рост: " << human_2->getHeight() << endl;

    ++*human_1;
    cout << *human_1;

    --*human_2;
    cout << *human_2;

    (*human_1)--;
    cout << *human_1;

    (*human_2)++;
    cout << *human_2;

    delete human_1;
    delete human_2;
}