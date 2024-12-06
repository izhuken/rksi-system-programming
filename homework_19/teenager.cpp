#include "teenager.h"

using namespace std;

Teenager::Teenager() : Teenager("undefined", "undefined", 0, 0, 0, 0, "undefined", "undefined") {}

Teenager::~Teenager()
{
}

Teenager::Teenager(string name, string surname, int age, int weight, int height, int course, string job, string pet) : IHuman(name, surname, age, weight, height), Child(course), Adult(job), _pet(correctAlpha(pet)) {}

// Операторы
bool Teenager::operator<(Teenager other)
{
    return this->getHeight() < other.getHeight();
}

bool Teenager::operator>(Teenager other)
{
    return this->getHeight() > other.getHeight();
}
Teenager Teenager::operator++()
{
    setHeight(getHeight() + 10);
    return *this;
}
Teenager Teenager::operator--()
{
    setlocale(LC_ALL, "");
    if (getHeight() > 0)
    {
        setHeight(getHeight() - 10);
        return *this;
    }
    else
    {
        cout << "Рост не может быть меньше 0" << endl;
        return *this;
    }
}
Teenager Teenager::operator++(int)
{
    Teenager t(*this);
    ++(*this);
    return t;
}

Teenager Teenager::operator--(int)
{
    Teenager t(*this);
    --(*this);
    return t;
}

std::ostream &operator<<(std::ostream &out, Teenager teenager)
{
    out << "Имя: " << teenager.getName() << endl
        << "Фамилия: " << teenager.getSurname() << endl
        << "Возраст: " << teenager.getAge() << endl
        << "Вес: " << teenager.getWeight() << endl
        << "Рост: " << teenager.getHeight() << endl
        << "Текущий класс: " << teenager.getCourse() << endl
        << "Место работы: " << teenager.getJob() << endl
        << "Животное: " << teenager.getPet() << endl
        << "--------------------------------------------------" << endl;
    return out;
}

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
    IHuman::readFromConsole();
    cout << "Введите текущий класс: ";
    int course;
    cin >> course;
    setCourse(course);
    cout << "Введите место работы: ";
    string job;
    cin >> job;
    setJob(job);
    cout << "Введите животное: ";
    string pet;
    cin >> pet;
    setPet(pet);
}

void Teenager::writeToFile()
{
    ofstream out;
    out.open("Human.txt", ios::app);
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
            << "________________________________________" << endl;
    }
    out.close();
}