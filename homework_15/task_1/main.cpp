#include <iostream>
#include "human.h"

using namespace std;

/*
1. Перепишите все const char* в классе Human через std::string.
2. Перепишите конструкторы через списки инициализации, добавьте в конструкторы с
неполными набором полей значения по умолчанию, проинициализируйте их через
делегирование конструкторов.
3. Добавьте проверки корректности вносимых данных в конструкторы и сеттеры, используя
методы работы со строкой.
4. Продемонстрируйте работу внесенных изменений в main.
*/

int main()
{
    Human *human_1 = new Human("Ivan", "Berlizov", ageHuman::Ivan, 84, 123);
    Human *human_2 = new Human("Vova", "Loskutov", ageHuman::Vova, 33);
    Human *human_3 = new Human("Sasha", "Kizimenko", ageHuman::Sasha);
    Human *human_4 = new Human("Ksenia", "Gurenko");
    Human *human_5 = new Human("Default");

    cout << *human_1;
    cout << *human_2;
    cout << *human_3;
    cout << *human_4;
    cout << *human_5;

    delete human_1;
    delete human_2;
    delete human_3;
    delete human_4;
    delete human_5;
}