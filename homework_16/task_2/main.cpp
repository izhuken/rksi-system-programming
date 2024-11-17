#include <iostream>
#include "truck.h"
#include "passenger.h"

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
    Truck *truck_1 = new Truck("Daewoo Matiz", "White", "Truck", 0.8, 10, false);
    truck_1->displayTruck();

    Truck *truck_2 = new Truck("Daewoo Matiz", "White", "Truck", 0.8, 20, true);
    truck_2->displayTruck();

    Truck *truck_3 = new Truck("Daewoo Matiz", "White", "Truck", 0.8, 30, false);
    truck_3->displayTruck();

    Passenger *passenger_1 = new Passenger("Belaz", "White", "Sedan", 123, 2);
    passenger_1->displayPassenger();

    Passenger *passenger_2 = new Passenger("Belaz", "White", "Sedan", 123, 5);
    passenger_2->displayPassenger();

    Passenger *passenger_3 = new Passenger("Belaz", "White", "Sedan", 123, 5);
    passenger_3->displayPassenger();

    delete truck_1;
    delete truck_2;
    delete truck_3;
    delete passenger_1;
    delete passenger_2;
    delete passenger_3;
    return 0;
}