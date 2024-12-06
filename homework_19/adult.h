#pragma once
#include "Ihuman.h"

using namespace std;

class Adult : virtual public IHuman
{
public:
    Adult(string name, string surname, int age, int weight, int height, string job);
    Adult(string job);
    Adult();

    ~Adult();

    bool operator<(Adult other);
    bool operator>(Adult other);

    Adult operator++();
    Adult operator--();

    Adult operator++(int);
    Adult operator--(int);

    friend std::ostream &operator<<(std::ostream &out, Adult adult);
    void setJob(string job);
    string getJob();

    void display();
    void readFromConsole();
    void writeToFile();

private:
    string _job;
};