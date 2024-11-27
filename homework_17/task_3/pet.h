#include "animal.h"

class Pet : public Animal
{
public:
    Pet();
    Pet(string name, string animal_type, string color, int age, double weight, bool hadCollar);
    Pet(string name, string animal_type, string color, int age, double weight);
    Pet(string name, string animal_type, string color, int age);
    Pet(string name, string animal_type, string color);
    Pet(string name, string animal_type);
    Pet(string name);

    ~Pet();

    void setHasCollar(bool hasCollar);
    bool getHasCollar();

    void printInfo();

private:
    bool _hasCollar;
};