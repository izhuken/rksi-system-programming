#include <string>

using namespace std;

namespace validatorCar
{
    enum CarMileage
    {
        Lada = 13412,
        Ford = 23412,
        Mazda = 30000,
        Default = 0,
    };
    string correctAlpha(string str);
    int correctCount(int count);
    void delimiter();
};