#include <iostream>
#include <cmath>
#include "animal_class.h"

using namespace std;

/*
1. Ограничьте доступ к записи неправильных данных извне:
объявите поля как private, методы структуры объявите public.
Добавьте метод для заполнения полей структуры. Создайте 2 объекта –
статически и динамически. Вызовите функции для каждого объекта и
выведите данные в консоль.

2. Перепишите ваш пользовательский тип Animal с использованием класса.
Разделите класс Human на заголовочный файл и файл с реализацией.
Проверьте работу вашего класса в main.cpp
*/

struct Animal
{
private:
    const char *name;
    const char *species;
    const char *color;
    int age;
    double weight;

public:
    void setData(char *newName, char *newSpecies, char *newColor, int newAge, double newWeight)
    {
        name = newName;
        species = newSpecies;
        color = newColor;
        age = newAge;
        weight = newWeight;
    }

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

int main()
{
    Animal animal1;
    Animal *animal2 = new Animal();

    animal1.setData({"Дружок"}, {"Той терьер"}, {"Коричневый"}, 5, 20.0);
    (*animal2).setData({"Мурзик"}, {"Русская голубая"}, {"Серый"}, 3, 5.5);

    animal1.printData();
    (*animal2).printData();

    animal1.feed(7);
    (*animal2).feed(7);

    animal1.changeName("Максик");
    (*animal2).changeName("Попугайчик");

    animal1.printData();
    (*animal2).printData();

    AnimalClass animalClass1;
    AnimalClass *animalClass2 = new AnimalClass();

    animalClass1.setData({"Дружок"}, {"Той терьер"}, {"Коричневый"}, 5, 20.0);
    (*animalClass2).setData({"Мурзик"}, {"Русская голубая"}, {"Серый"}, 3, 5.5);

    animalClass1.printData();
    (*animalClass2).printData();

    animalClass1.feed(7);
    (*animalClass2).feed(7);

    animalClass1.changeName("Максик");
    (*animalClass2).changeName("Попугайчик");

    animalClass1.printData();
    (*animalClass2).printData();

    delete animal2;
    delete animalClass2;
    return 0;
}
