#include "human.h"
using namespace std;
class Adult : public Human
{
public:
    Adult();
    Adult(string name, string surname, int age, int weight, int height, string job);
    Adult(string name, string surname, int age, int weight, int height);
    Adult(string name, string surname, int age, int weight);
    Adult(string name, string surname, int age);
    Adult(string name, string surname);
    Adult(string name);

    void setJob(string job);
    string getJob();

    void displayAdult();

private:
    string _job;
};