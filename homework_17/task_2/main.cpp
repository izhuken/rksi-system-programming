#include <iostream>
#include "truck.h"
#include "passenger.h"

using namespace std;

/*
1. Обозначьте необходимые функции в родительском классе виртуальными, при необходимости переопределите
их в дочерних классах (реализация полиморфизма).
2. Дополните дочерние классы деструкторами.
3. Продемонстрируйте работу внесенных изменений в main с помощью массива, указателей и цикла For:
создайте по 2 объекта дочерних классов (1 статический, 1 динамический) и примените к ним переопределенные функции.

*/

int main()
{
    Truck *truck_1 = new Truck("Daewoo Matiz", "White", "Truck", 0.8, 10, false);
    Truck truck_2 = Truck("Daewoo Matiz", "White", "Truck", 0.8, 20, true);
    Passenger *passenger_1 = new Passenger("Belaz", "White", "Sedan", 123, 2);
    Passenger passenger_2 = Passenger("Belaz", "White", "Sedan", 123, 5);

    Car **array = new Car *[4]{truck_1, &truck_2, passenger_1, &passenger_2};
    Car *array_2[4] = {truck_1, &truck_2, passenger_1, &passenger_2};

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

    delete truck_1;
    delete passenger_1;
    delete[] array;
    return 0;
}