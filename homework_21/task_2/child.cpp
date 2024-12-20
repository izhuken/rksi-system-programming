#include <iostream>
#include "child.h"

using namespace std;

Child::Child() : Child("undefined", "undefined", 0, 0, 0, 0) {}
Child::Child(
    string name,
    string surname,
    int age,
    int weight,
    int height,
    int course) : IHuman(name, surname, age, weight, height), _course(correctCount(course))
{
}
Child::Child(int course) : IHuman("undefined", "undefined", 0, 0, 0), _course(correctCount(course)) {}

void Child::setCourse(int course)
{
    this->_course = correctCount(course);
}

int Child::getCourse()
{
    return _course;
}

void Child::display()
{
    setlocale(LC_ALL, "");
    IHuman::display();
    cout << "Текущий класс: " << _course << endl;
}

void Child::readFromConsole()
{
    IHuman::readFromConsole();
    cout << "Введите текущий класс: ";
    cin >> this->_course;
}

void Child::writeToFile()
{
    ofstream out;
    out.open("human.txt", ios::app);
    if (out.is_open())
    {
        out << "Имя: " << getName() << endl
            << "Фамилия: " << getSurname() << endl
            << "Возраст: " << getAge() << endl
            << "Вес: " << getWeight() << endl
            << "Рост: " << getHeight() << endl
            << "Класс: " << getCourse() << endl
            << "ИМТ: " << calculateBMI() << endl
            << "Дата рождения: " << calculateDateOfBirth() << endl
            << "________________________________________" << endl;
    }
    out.close();
}