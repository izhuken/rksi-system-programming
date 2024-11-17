#include <iostream>
#include "car.h"

using namespace std;

/*
1. Перепишите все const char* в классе Car через std::string.
2. Перепишите конструкторы через списки инициализации, добавьте в конструкторы с
неполными набором полей значения по умолчанию, проинициализируйте их через
делегирование конструкторов.
3. Добавьте проверки корректности вносимых данных в конструкторы и сеттеры, используя
методы работы со строкой.
4. Продемонстрируйте работу внесенных изменений в main.
*/

int main()
{
    Car *car_1 = new Car("Lada", "Red", "HATCHBACK", 1.5, 10);
    Car *car_2 = new Car("Ford", "Black", "CROSSOVER", 1.6);
    Car *car_3 = new Car("Lada", "Blue", "HATCHBACK");
    Car *car_4 = new Car("Lada", "Blue");
    Car *car_5 = new Car("Lada");

    cout << *car_1;
    cout << *car_2;
    cout << *car_3;
    cout << *car_4;
    cout << *car_5;

    delete car_1;
    delete car_2;
    delete car_3;
    delete car_4;
    delete car_5;
}