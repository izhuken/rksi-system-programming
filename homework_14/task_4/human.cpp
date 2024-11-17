#include <iostream>
#include <cmath>
#include <ctime>
#include <cstring>
#include "human.h"

using namespace std;

Human::Human(const char *name, const char *surname, HumanAge age, double weight, int height)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->weight = weight;
    this->height = height;
}
Human::Human(const char *name, const char *surname, HumanAge age, double weight)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->weight = weight;
}
Human::Human(const char *name, const char *surname, HumanAge age)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
}
Human::Human(const char *name, const char *surname)
{
    this->name = name;
    this->surname = surname;
}
Human::Human(const char *name)
{
    this->name = name;
}
Human::~Human()
{
    cout << endl;
}
bool Human::operator<(Human other)
{
    return this->height < other.height;
}

bool Human::operator>(Human other)
{
    return this->height > other.height;
}
Human Human::operator++(int)
{
    Human human(*this);
    height += 10;
    return human;
}
Human Human::operator--(int)
{
    Human human(*this);
    height -= 10;
    return human;
}
Human Human::operator++()
{
    height += 10;
    return *this;
}
Human Human::operator--()
{
    height -= 10;
    return *this;
}

std::ostream &operator<<(std::ostream &out, Human human)
{
    out << "Имя: " << human.name << endl
        << "Фамилия: " << human.surname << endl
        << "Возраст: " << human.age << endl
        << "Вес: " << human.weight << endl
        << "Рост: " << human.height << endl
        << "--------------------------------------------------" << endl;
    return out;
}
void Human::setName(const char *name)
{
    if (name != nullptr && strlen(name))
    {
        this->name = name;
    }
    else
    {
        cout << "Имя не может быть пустым" << endl;
    }
}
const char *Human::getName()
{
    return name;
}

void Human::setSurname(const char *surname)
{
    if (surname != nullptr && strlen(surname))
    {
        this->surname = surname;
    }
    else
    {
        cout << "Имя не может быть пустым" << endl;
    }
}
const char *Human::getSurname()
{
    return surname;
}

void Human::setAge(HumanAge age)
{
    this->age = age;
}
HumanAge Human::getAge()
{
    return age;
}

void Human::setWeight(double weight)
{
    if (weight < 0 || weight > 500)
    {
        cout << "Вес не может быть меньше 0 или больше 500";
    }
    else
    {
        this->weight = weight;
    }
}
double Human::getWeight()
{
    return weight;
}

void Human::setHeight(int height)
{
    if (height < 0 || height > 400)
    {
        cout << "Рост не может быть меньше 0 или больше 400" << endl;
    }
    else
    {
        this->height = height;
    }
}
int Human::getHeight()
{
    return height;
}

void Human::printInfo()
{
    cout << "Имя: " << name << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Возраст: " << age << endl;
    cout << "Вес: " << weight << endl;
    cout << "Рост: " << height << endl;
}