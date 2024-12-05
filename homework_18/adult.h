#include "Ihuman.h"
using namespace std;
class Adult : public IHuman
{
public:
    Adult();
    Adult(string name, string surname, int age, int weight, int height, string job);
    Adult(string name, string surname, int age, int weight, int height);
    Adult(string name, string surname, int age, int weight);
    Adult(string name, string surname, int age);
    Adult(string name, string surname);
    Adult(string name);

    ~Adult();

    void setJob(string job);
    string getJob();

    void display();

private:
    string _job;
};