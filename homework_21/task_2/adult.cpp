#include "adult.h"

using namespace std;

Adult::Adult() : Adult("undefined", "undefined", 0, 0, 0, "undefined") {}
Adult::Adult(
    string name,
    string surname,
    int age,
    int weight,
    int height,
    string job) : IHuman(name, surname, age, weight, height), _job(correctAlpha(job)) {}
Adult::Adult(string job) : IHuman("undefined", "undefined", 0, 0, 0), _job(correctAlpha(job)) {}

void Adult::setJob(string job)
{
    this->_job = correctAlpha(job);
}

string Adult::getJob()
{
    return _job;
}

void Adult::display()
{
    setlocale(LC_ALL, "");
    IHuman::display();
    cout << "Текущая работа: " << getJob() << endl;
}

void Adult::readFromConsole()
{
    IHuman::readFromConsole();
    cout << "Введите текущую работу: ";
    cin >> this->_job;
}

void Adult::writeToFile()
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
            << "Работа: " << getJob() << endl
            << "ИМТ: " << calculateBMI() << endl
            << "Дата рождения: " << calculateDateOfBirth() << endl
            << "________________________________________" << endl;
    }
    out.close();
}