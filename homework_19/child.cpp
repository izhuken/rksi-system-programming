#include "child.h"

using namespace std;

Child::Child() : Child("undefined", "undefined", 0, 0, 0, 0) {}

Child::~Child()
{
}

Child::Child(string name, string surname, int age, int weight, int height, int course) : IHuman(name, surname, age, weight, height), _course(correctCount(course))
{
}
Child::Child(int course) : _course(correctCount(course)) {}

// Операторы
bool Child::operator<(Child other)
{
    return this->getHeight() < other.getHeight();
}

bool Child::operator>(Child other)
{
    return this->getHeight() > other.getHeight();
}
Child Child::operator++()
{
    setHeight(getHeight() + 10);
    return *this;
}
Child Child::operator--()
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
Child Child::operator++(int)
{
    Child t(*this);
    ++(*this);
    return t;
}

Child Child::operator--(int)
{
    Child t(*this);
    --(*this);
    return t;
}

std::ostream &operator<<(std::ostream &out, Child child)
{
    out << "Имя: " << child.getName() << endl
        << "Фамилия: " << child.getSurname() << endl
        << "Возраст: " << child.getAge() << endl
        << "Вес: " << child.getWeight() << endl
        << "Рост: " << child.getHeight() << endl
        << "Текущий класс: " << child.getCourse() << endl
        << "--------------------------------------------------" << endl;
    return out;
}

void Child::setCourse(int couser)
{
    this->_course = correctCount(couser);
}

int Child::getCourse()
{
    return _course;
}

void Child::display()
{
    setlocale(LC_ALL, "");
    IHuman::display();
    cout << "Текущий класс: " << _course << endl
         << endl;
}

void Child::readFromConsole()
{
    IHuman::readFromConsole();
    cout << "Введите текущий класс: ";
    cin >> _course;
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
            << "________________________________________" << endl;
    }
    out.close();
}