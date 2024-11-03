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
    const char *brand;
    const char *color;
    const char *bodyType;
    double engineVolume;
    double kilometers;

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
    car1.brand = {"Toyota"};
    car1.color = {"Красная"};
    car1.bodyType = {"Седан"};
    car1.engineVolume = 1.8;
    car1.kilometers = 50000.0;

    Car car2{{"Лада приора"}, {"Заниженная, затонирванная"}, {"Лев"}, 4.3, 30000.0};

    Car car3 = {{"Ford"}, {"Черный"}, {"Седан"}, 3.5, 15000.0};

    Car *car4 = new Car();
    car4->brand = {"Шевроле"};
    car4->color = {"Белый"};
    car4->bodyType = {"Седан"};
    car4->engineVolume = 2.5;
    car4->kilometers = 20000.0;

    Car cars[] = {car1, car2, car3, *car4};

    for (int i = 0; i < 4; i++)
    {
        cars[i].printData();
        cout << "Средних расход топлива: " << cars[i].calculateFuelConsumption() << " л/100км" << endl;
        cout << "--------------------------" << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        cars[i].decreaseKilometers(10000);
        cars[i].printData();
    }

    for (int i = 0; i < 4; i++)
    {
        printData(cars[i]);
        cout << "Средних расход топлива: " << calculateFuelConsumption(cars[i]) << " л/100км" << endl;
        cout << "--------------------------" << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        decreaseKilometers(10000, cars[i]);
        printData(cars[i]);
    }

    delete car4;
    return 0;
}

double calculateFuelConsumption(Car car)
{
    return (car.engineVolume / car.kilometers) * 100;
}

void decreaseKilometers(double amount, Car car)
{
    if (amount < car.kilometers)
    {
        car.kilometers -= amount;
    }
    else
    {
        car.kilometers = 0;
    }
}

void printData(Car car)
{
    cout << "Модель: " << car.brand
         << ", Цвет: " << car.color
         << ", Тип кузова: " << car.bodyType
         << ", Объем двигателя: " << car.engineVolume
         << ", Пробег: " << car.kilometers << " км" << endl;
}