#include <iostream>
#include <cmath>

using namespace std;

/*
1. Создайте структуру для хранения информации о животных.
Структура должна содержать минимум 5 полей: имя, вид, окрас, возраст, вес.

2. Создайте 3 статических объекта структуры и проинициализируйте их поля разыми способами:
инициализацией каждого поля отдельно, списком инициализации и универсальной инициализацией.
Еще один объект создайте в динамической области и проинициализируйте его поля. Всего должно
получиться 4 объекта (экземпляра) структуры. Выведите данные в консоль.

3. Добавьте минимум 3 функции для работы со структурой Animal (вне структуры):
увеличение веса на 0,01 за каждый день кормежки (вес*0,01*кол-во дней кормежки),
смена имени, вывод данных структуры в консоль. Вызовите данные функции для каждого
экземпляра структуры.

4. Созданные функции определите как методы структуры Animal.
Вызовите данные методы для каждого экземпляра структуры.
*/

struct Animal
{
    const char *name;
    const char *species;
    const char *color;
    int age;
    double weight;

    void feed(int days)
    {
        weight += weight * 0.01 * days;
    }

    void changeName(const char *newName)
    {
        name = newName;
    }

    void printData()
    {
        cout << "Имя: " << name
             << ", Вид: " << species
             << ", Цвет: " << color
             << ", Возраст: " << age
             << ", Вес: " << weight << " кг" << endl;
    }
};

void feed(int days, Animal animal);
void changeName(const char *newName, Animal animal);
void printData(Animal animal);

int main()
{
    Animal animal1;
    animal1.name = "Дружок";
    animal1.species = "Той терьер";
    animal1.color = "Коричневый";
    animal1.age = 5;
    animal1.weight = 20.0;

    Animal animal2{"Мурзик", "Русская голубая", "Серый", 3, 5.5};

    Animal animal3 = {"Оззи", "Кролик", "Белый", 2, 2.0};

    Animal *animal4 = new Animal();
    animal4->name = "Полли";
    animal4->species = "Папугай";
    animal4->color = "Цветной";
    animal4->age = 1;
    animal4->weight = 0.5;

    Animal animals[] = {animal1, animal2, animal3, *animal4};

    for (int i = 0; i < 4; i++)
    {
        animals[i].printData();
        cout << "--------------------------" << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        animals[i].feed(7);
    }

    animal1.changeName("Максик");
    animal4->changeName("Попугайчик");

    cout << "Звери после кормежки:" << endl;
    for (int i = 0; i < 4; i++)
    {
        animals[i].printData();
        cout << "--------------------------" << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        printData(animals[i]);
        cout << "--------------------------" << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        feed(7, animals[i]);
    }

    changeName("Максик", animal1);
    changeName("Попугайчик", *animal4);

    cout << "Звери после кормежки:" << endl;
    for (int i = 0; i < 4; i++)
    {
        printData(animals[i]);
        cout << "--------------------------" << endl;
    }

    delete animal4;
    return 0;
}

void feed(int days, Animal animal)
{
    animal.weight += animal.weight * 0.01 * days;
}

void changeName(const char *newName, Animal animal)
{
    animal.name = newName;
}

void printData(Animal animal)
{
    cout << "Имя: " << animal.name
         << ", Вид: " << animal.species
         << ", Цвет: " << animal.color
         << ", Возраст: " << animal.age
         << ", Вес: " << animal.weight << " кг" << endl;
}