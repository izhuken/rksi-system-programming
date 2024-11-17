#include "human.h"

using namespace std;

class Child : public Human
{
public:
    Child();
    Child(string name, string surname, int age, int weight, int height, int course);
    Child(string name, string surname, int age, int weight, int height);
    Child(string name, string surname, int age, int weight);
    Child(string name, string surname, int age);
    Child(string name, string surname);
    Child(string name);

    void setCourse(int course);
    int getCourse();

    void displayChild();

private:
    int _course;
};