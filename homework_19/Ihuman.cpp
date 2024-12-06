#include "Ihuman.h"

using namespace std;

IHuman::~IHuman() {}

IHuman::IHuman()
{
    cout << "constr Human" << endl;
    this->_name = "undefined";
    this->_surname = "undefined";
    this->_age = ageHuman::Default;
    this->_weight = 0;
    this->_height = 0;
}
IHuman::IHuman(string name, string surname, int age, int weight, int height) : _name(correctAlpha(name)),
                                                                               _surname(correctAlpha(surname)), _age(correctCount(age)), _weight(correctCount(weight)), _height(correctCount(height)) {}

// геттеры и сеттеры
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

void IHuman::display()
{
    cout << "Имя: " << _name << endl;
    cout << "Фамилия: " << _surname << endl;
    cout << "Возраст: " << _age << endl;
    cout << "Вес: " << _weight << endl;
    cout << "Рост: " << _height << endl;
}

void IHuman::readFromConsole()
{
    setlocale(LC_ALL, "");
    cout << "Введите имя: ";
    cin >> _name;
    cout << "Введите фамилию: ";
    cin >> _surname;
    cout << "Введите возраст: ";
    cin >> _age;
    cout << "Введите вес: ";
    cin >> _weight;
    cout << "Введите рост: ";
    cin >> _height;
}

void IHuman::writeToFile() {}