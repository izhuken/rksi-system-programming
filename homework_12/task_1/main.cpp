#include "human_class.h"
#include <iostream>
#include <cmath>

using namespace std;

struct Human
{
private:
    const char *name;
    const char *surname;
    int age;
    double weight;
    double height;

public:
    void setData(const char *name, const char *surname, int age, double weight, double height)
    {
        this->name = name;
        this->surname = surname;
        this->age = age;
        this->weight = weight;
        this->height = height;
    }

    double calculateBMI()
    {
        return weight / (pow(height / 100, 2));
    }

    int calculateBirthYear()
    {
        return 2024 - age;
    }

    void printData()
    {
        cout << "Имя: " << name
             << ", Фамилия: " << surname
             << ", Возраст: " << age
             << ", Вес: " << weight
             << ", Рост: " << height << endl;
    }
};

/*
1. Ограничьте доступ к записи неправильных данных извне:
объявите поля как private, методы структуры объявите public.
Добавьте метод для заполнения полей структуры. Создайте 2 объекта – статически и динамически.

2. Вызовите функции для каждого объекта и выведите данные в консоль.
Перепишите ваш пользовательский тип Human с использованием класса.
Разделите класс Human на заголовочный файл и файл с реализацией.
Проверьте работу вашего класса в main.cpp
*/

int main()
{
    Human human1;
    human1.setData("Иван", "Иванчук", 12, 45.0, 159.0);
    human1.printData();
    cout << "BMI: " << human1.calculateBMI() << endl;
    cout << "Год рождения: " << human1.calculateBirthYear() << endl;

    Human *human2 = new Human();
    (*human2).setData("Петр", "Петрюк", 48, 145.0, 59.0);
    (*human2).printData();
    cout << "BMI: " << (*human2).calculateBMI() << endl;
    cout << "Год рождения: " << (*human2).calculateBirthYear() << endl;

    cout << endl;

    HumanClass humanClass1;
    humanClass1.setData({"Иван"}, {"Иванчук"}, 12, 45.0, 159.0);
    humanClass1.printData();
    cout << "BMI: " << humanClass1.calculateBMI() << endl;
    cout << "Год рождения: " << humanClass1.calculateBirthYear() << endl;

    HumanClass *humanClass2 = new HumanClass();
    (*humanClass2).setData({"Петр"}, {"Петрюк"}, 48, 145.0, 59.0);
    (*humanClass2).printData();
    cout << "BMI: " << (*humanClass2).calculateBMI() << endl;
    cout << "Год рождения: " << (*humanClass2).calculateBirthYear() << endl;

    delete human2;
    delete humanClass2;

    return 0;
}