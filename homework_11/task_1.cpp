#include <iostream>
#include <cmath>

/*
1. Создайте структуру для хранения информации о человеке. Структура должна содержать минимум
5 полей: имя, фамилия, возраст, вес, рост.

2. Создайте 3 статических объекта структуры и проинициализируйте их поля разыми способами:
инициализацией каждого поля отдельно, списком инициализации и универсальной инициализацией.

3. Еще один объект создайте в динамической области и проинициализируйте его поля. Всего должно
получиться 4 объекта (экземпляра) структуры. Выведите данные в консоль.

4. Добавьте минимум 3 функции для работы со структурой Human (вне структуры):
подсчет индекса массы тела (ИМТ = (вес/2.205)/(рост/39.37)2), вычисление года рождения по возрасту,
вывод данных структуры в консоль. Вызовите данные функции для каждого экземпляра структуры.
Созданные функции определите как методы структуры Human. Вызовите данные методы для каждого экземпляра структуры.

*/

using namespace std;

struct Human
{
    const char *name;
    const char *surname;
    int age;
    double weight;
    double height;

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

void printData(Human person);
double calculateBMI(Human person);
int calculateBirthYear(Human person);

int main()
{
    Human person1;
    person1.name = {"Ивашка"};
    person1.surname = {"Иванов"};
    person1.age = 16;
    person1.weight = 45.0;
    person1.height = 180.0;

    Human person2{
        {"Петя"},
        {"Петров"},
        25,
        70.0,
        175.0,
    };

    Human person3 = {{"Аня"}, {"Кузнецова"}, 17, 150.0, 150.0};

    Human *person4 = new Human();
    person4->name = "Ксения";
    person4->surname = "Гуренко";
    person4->age = 18;
    person4->weight = 48.0;
    person4->height = 158.0;

    Human persons[] = {person1, person2, person3, *person4};

    person1.printData();
    cout << "ИМТ: " << person1.calculateBMI() << endl;
    cout << "Год рождения: " << person1.calculateBirthYear() << endl;
    cout << "--------------------------" << endl;

    person2.printData();
    cout << "ИМТ: " << person2.calculateBMI() << endl;
    cout << "Год рождения: " << person2.calculateBirthYear() << endl;
    cout << "--------------------------" << endl;

    person3.printData();
    cout << "ИМТ: " << person3.calculateBMI() << endl;
    cout << "Год рождения: " << person3.calculateBirthYear() << endl;
    cout << "--------------------------" << endl;

    (*person4).printData();
    cout << "ИМТ: " << (*person4).calculateBMI() << endl;
    cout << "Год рождения: " << (*person4).calculateBirthYear() << endl;
    cout << "--------------------------" << endl;

    printData(person1);
    cout << "ИМТ: " << calculateBMI(person1) << endl;
    cout << "Год рождения: " << calculateBirthYear(person1);

    printData(person2);
    cout << "ИМТ: " << calculateBMI(person2) << endl;
    cout << "Год рождения: " << calculateBirthYear(person2);

    printData(person3);
    cout << "ИМТ: " << calculateBMI(person3) << endl;
    cout << "Год рождения: " << calculateBirthYear(person3);

    printData(*person4);
    cout << "ИМТ: " << calculateBMI(*person4) << endl;
    cout << "Год рождения: " << calculateBirthYear(*person4);

    delete person4;
    return 0;
}

double calculateBMI(Human person)
{
    return person.weight / (pow(person.height / 100, 2));
}

int calculateBirthYear(Human person)
{
    return 2024 - person.age;
}

void printData(Human person)
{
    cout << "Имя: " << person.name
         << ", Фамилия: " << person.surname
         << ", Возраст: " << person.age
         << ", Вес: " << person.weight
         << ", Рост: " << person.height << endl;
}