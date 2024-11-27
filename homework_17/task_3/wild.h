#include "animal.h"

class Wild : public Animal
{
public:
    Wild();
    Wild(string name, string animal_type, string color, int age, double weight, string area);
    Wild(string name, string animal_type, string color, int age, double weight);
    Wild(string name, string animal_type, string color, int age);
    Wild(string name, string animal_type, string color);
    Wild(string name, string animal_type);
    Wild(string name);

    ~Wild();

    void setArea(string area);
    string getArea();

    void printInfo();

private:
    string _area;
};