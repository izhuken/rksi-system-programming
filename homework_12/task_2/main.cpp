#include "car_class.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
1. Создайте структуру для хранения информации об автомобиле.
Структура должна содержать минимум 5 полей: марка, цвет, тип кузова, объем двигателя, пробег.

2. Создайте 3 статических объекта структуры и проинициализируйте
их поля разыми способами: инициализацией каждого поля отдельно,
списком инициализации и универсальной инициализацией. Еще один объект создайте в
динамической области и проинициализируйте его поля. Всего должно получиться 4 объекта
(экземпляра) структуры. Выведите данные в консоль.

3. Добавьте минимум 3 функции для работы со структурой Car (вне структуры):
подсчет среднего расхода топлива на 100 км (объем двигателя/пройденное расстояние * 100),
уменьшение пробега, вывод данных структуры в консоль. Вызовите данные функции для каждого экземпляра структуры.

4. Созданные функции определите как методы структуры Car.
Вызовите данные методы для каждого экземпляра структуры.

*/

struct Car
{
private:
    const char *brand;
    const char *color;
    const char *bodyType;
    double engineVolume;
    double kilometers;

public:
    void setData(char *newBrand, char *newColor, char *newBodyType, double newEngineVolume, double newKilometers)
    {
        brand = newBrand;
        color = newColor;
        bodyType = newBodyType;
        engineVolume = newEngineVolume;
        kilometers = newKilometers;
    }

    double calculateFuelConsumption()
    {
        return (engineVolume / kilometers) * 100;
    }

    void decreaseKilometers(double amount)
    {
        if (amount < kilometers)
        {
            kilometers -= amount;
        }
        else
        {
            kilometers = 0;
        }
    }

    void printData()
    {
        cout << "Модель: " << brand
             << ", Цвет: " << color
             << ", Тип кузова: " << bodyType
             << ", Объем двигателя: " << engineVolume
             << ", Пробег: " << kilometers << " км" << endl;
    }
};

double calculateFuelConsumption(Car car);
void decreaseKilometers(double amount, Car car);
void printData(Car car);

int main()
{
    Car car1;
    Car *car2 = new Car();

    car1.setData({"Toyota"}, {"Красная"}, {"Седан"}, 1.8, 50000.0);
    (*car2).setData({"Toyota"}, {"Красная"}, {"Седан"}, 1.8, 50000.0);

    car1.printData();
    cout << "Средних расход топлива: " << car1.calculateFuelConsumption() << " л/100км" << endl;
    cout << "--------------------------" << endl;

    (*car2).printData();
    cout << "Средних расход топлива: " << (*car2).calculateFuelConsumption() << " л/100км" << endl;

    CarClass carClass1;
    CarClass *car2Class = new CarClass();

    carClass1.setData({"Toyota"}, {"Красная"}, {"Седан"}, 1.8, 50000.0);
    (*car2Class).setData({"Toyota"}, {"Красная"}, {"Седан"}, 1.8, 50000.0);

    carClass1.printData();
    cout << "Средних расход топлива: " << carClass1.calculateFuelConsumption() << " л/100км" << endl;
    cout << "--------------------------" << endl;

    (*car2Class).printData();
    cout << "Средних расход топлива: " << (*car2Class).calculateFuelConsumption() << " л/100км" << endl;

    delete car2;
    delete car2Class;
    return 0;
}
