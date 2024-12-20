#include "teenager.h"

using namespace std;

Teenager::Teenager(
    string name,
    string surname,
    int age,
    int weight,
    int height,
    int course,
    string job,
    string pet)
    : IHuman(name, surname, age, weight, height),
      Child(course), Adult(job),
      _pet(correctAlpha(pet)) {}
Teenager::Teenager() : Teenager("undefined", "undefined", 0, 0, 0, 0, "undefined", "undefined") {}

void Teenager::setPet(string pet)
{
    this->_pet = correctAlpha(pet);
}

string Teenager::getPet()
{
    return _pet;
}

void Teenager::display()
{
    setlocale(LC_ALL, "");
    IHuman::display();
    cout << "Текущий класс: " << getCourse() << endl
         << "Место работы: " << getJob() << endl
         << "Животное: " << _pet << endl;
}

void Teenager::readFromConsole()
{
    int course;
    string job;
    IHuman::readFromConsole();
    cout << "Введите текущий класс: ";
    cin >> course;
    cout << "Введите место работы: ";
    cin >> job;
    cout << "Введите животное: ";
    cin >> this->_pet;
}

void Teenager::writeToFile()
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
            << "Работа: " << getJob() << endl
            << "Животное: " << getPet() << endl
            << "ИМТ: " << calculateBMI() << endl
            << "Дата рождения: " << calculateDateOfBirth() << endl
            << "________________________________________" << endl;
    }
    out.close();
}