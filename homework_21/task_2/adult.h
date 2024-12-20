#pragma once
#include "Ihuman.h"

using namespace std;

class Adult : virtual public IHuman
{
public:
    Adult();
    Adult(string job);
    Adult(string name, string surname, int age, int weight, int height, string job);

    string getJob();
    void setJob(string job);

    void display();
    void writeToFile();
    void readFromConsole();

private:
    string _job;
};