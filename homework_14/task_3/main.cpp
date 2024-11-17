#include <iostream>
#include "car.h"

using namespace std;

/*
1. Перегрузите операторы ++ и --, которые будут увеличивать/уменьшать объем двигателя у
Car. Перегрузите операторы &lt; и &gt; у Car для сравнения по объему двигателя. Перегрузите
оператор вывода в cout для класса Car.
2. Добавьте в конструкторы, где это необходимо, в качестве параметров данные из
перечисления.
3. Продемонстрируйте работу внесенных изменений в main.
*/

int main()
{
    Car *car_1 = new Car("Lada", "Red", "HATCHBACK", 1.5, CarMileage::Lada);
    Car *car_2 = new Car("Ford", "Black", "CROSSOVER", 1.6, CarMileage::Ford);

    cout << *car_1 << endl;
    cout << *car_2 << endl;

    cout << "Больше объем двигателя: ";
    if (*car_1 > *car_2)
        cout << car_1->getMark() << ". Объем двигателя: " << car_1->getVolume() << endl;
    else
        cout << car_2->getMark() << ". Объем двигателя: " << car_2->getVolume() << endl;

    ++*car_1;
    cout << *car_1;

    --*car_2;
    cout << *car_2;

    (*car_1)--;
    cout << *car_1;

    (*car_2)++;
    cout << *car_2;

    delete car_1;
    delete car_2;
}