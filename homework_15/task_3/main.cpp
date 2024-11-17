#include <iostream>
#include "animal.h"

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
    Animal *animal_1 = new Animal("Bars", "Cat", "Gray", 9, 150000);
    Animal *animal_2 = new Animal("Puma", "Rat", "Black", 19);
    Animal *animal_3 = new Animal("Milka", "Rat", "Black");
    Animal *animal_4 = new Animal("Bulka", "Rat");
    Animal *animal_5 = new Animal("Cerk");

    cout << *animal_1;
    cout << *animal_2;
    cout << *animal_3;
    cout << *animal_4;
    cout << *animal_5;

    delete animal_1;
    delete animal_2;
    delete animal_3;
    delete animal_4;
    delete animal_5;
}
