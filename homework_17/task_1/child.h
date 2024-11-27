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

    ~Child();

    void setCourse(int course);
    int getCourse();

    void display();

private:
    int _course;
};