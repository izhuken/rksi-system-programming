#include "car_class.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
1. Добавьте конструкторы и в ваш класс (по умолчанию и параметризованные
для каждого набора полей). В main создайте объекты под каждый конструктор,
как минимум 2 из объектов должны быть динамическими. Выведите данные в консоль.

2. Добавьте деструктор в ваш класс. Продемонстрируйте работу конструкторов и
деструктора в зависимости от области видимости объектов класса.

3. Создайте геттеры и сеттеры для приватных полей класса. Как минимум в 2
сеттера добавьте проверку вносимых данных. Продемонстрируйте работу с
ограничениями в консоли.


*/

int main()
{
    CarClass carClass1({"Toyta Camry"});
    CarClass *carClass2 = new CarClass({"Ford Focus"}, {"Черный"});

    carClass1.setEngineVolume(-3.5);
    (*carClass2).setKilometers(0);

    {
        CarClass carClass3({"Porche Panamera"}, {"Заниженный затонированный"}, {"Хетчбэк"});
        CarClass *carClass4 = new CarClass({"Ford Focus"}, {"Черный"}, {"Хетчбэк"}, 4.2);

        {
            CarClass *carClass5 = new CarClass({"Toyota Mark II"}, {"Черный"}, {"Хетчбэк"}, 4.2, 7000);
            delete carClass5;
        }

        delete carClass4;
    }

    delete carClass2;
    return 0;
}
