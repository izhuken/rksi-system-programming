#include <ctime>
#include "Ihuman.h"

using namespace std;

IHuman::~IHuman() {}

IHuman::IHuman()
{
    cout << "constr Human" << endl;
    this->_name = "undefined";
    this->_surname = "undefined";
    this->_age = ageHuman::DefaultAge;
    this->_weight = 0;
    this->_height = 0;
}
IHuman::IHuman(
    string name,
    string surname,
    int age,
    int weight,
    int height) : _name(correctAlpha(name)),
                  _surname(correctAlpha(surname)),
                  _age(correctCount(age)),
                  _weight(correctCount(weight)),
                  _height(correctCount(height)) {}

void IHuman::setName(string name)
{
    this->_name = correctAlpha(name);
}
string IHuman::getName()
{
    return _name;
}

void IHuman::setSurname(string surname)
{
    this->_surname = correctAlpha(surname);
}
string IHuman::getSurname()
{
    return _surname;
}

void IHuman::setAge(int age)
{
    this->_age = correctCount(age);
}
int IHuman::getAge()
{
    return _age;
}

void IHuman::setWeight(int weight)
{
    this->_weight = correctCount(weight);
}
int IHuman::getWeight()
{
    return _weight;
}

void IHuman::setHeight(int height)
{
    this->_height = correctCount(height);
}
int IHuman::getHeight()
{
    return _height;
}

float IHuman::calculateBMI()
{
    return (this->_weight / 2.205) / pow(this->_height / 39.37, 2);
}

void IHuman::display()
{
    cout << "Имя: " << this->_name << endl;
    cout << "Фамилия: " << this->_surname << endl;
    cout << "Возраст: " << this->_age << endl;
    cout << "Вес: " << this->_weight << endl;
    cout << "Рост: " << this->_height << endl;
    cout << "ИМТ: " << this->calculateBMI() << endl;
    cout << "Дата рождения: " << this->calculateDateOfBirth() << endl;
}

void IHuman::readFromConsole()
{
    setlocale(LC_ALL, "");
    cout << "Введите имя: ";
    cin >> this->_name;
    cout << "Введите фамилию: ";
    cin >> this->_surname;
    cout << "Введите возраст: ";
    cin >> this->_age;
    cout << "Введите вес: ";
    cin >> this->_weight;
    cout << "Введите рост: ";
    cin >> this->_height;
}

int IHuman::calculateDateOfBirth()
{
    time_t t = time(NULL);
    tm *now = localtime(&t);
    return now->tm_year - this->_age + 1900;
}

void IHuman::writeToFile() {}