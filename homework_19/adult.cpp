#include "adult.h"

using namespace std;

Adult::Adult() : Adult("undefined", "undefined", 0, 0, 0, "undefined") {}

Adult::~Adult() {}

Adult::Adult(string name, string surname, int age, int weight, int height, string job) : IHuman(name, surname, age, weight, height), _job(correctAlpha(job)) {}

Adult::Adult(string job) : _job(correctAlpha(job)) {}

// Операторы
bool Adult::operator<(Adult other)
{
    return this->getHeight() < other.getHeight();
}

bool Adult::operator>(Adult other)
{
    return this->getHeight() > other.getHeight();
}
Adult Adult::operator++()
{
    setHeight(getHeight() + 10);
    return *this;
}
Adult Adult::operator--()
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
Adult Adult::operator++(int)
{
    Adult t(*this);
    ++(*this);
    return t;
}

Adult Adult::operator--(int)
{
    Adult t(*this);
    --(*this);
    return t;
}

std::ostream &operator<<(std::ostream &out, Adult adult)
{
    out << "Имя: " << adult.getName() << endl
        << "Фамилия: " << adult.getSurname() << endl
        << "Возраст: " << adult.getAge() << endl
        << "Вес: " << adult.getWeight() << endl
        << "Рост: " << adult.getHeight() << endl
        << "Текущий класс: " << adult.getJob() << endl
        << "--------------------------------------------------" << endl;
    return out;
}

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
    cout << "Текущая работа: " << getJob() << endl
         << endl;
}

void Adult::readFromConsole()
{
    IHuman::readFromConsole();
    cout << "Введите текущую работу: ";
    cin >> _job;
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
            << "________________________________________" << endl;
    }
    out.close();
}