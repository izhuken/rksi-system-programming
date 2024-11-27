#include <string>

using namespace std;

namespace validatorHuman
{
    enum ageHuman
    {
        Ivan = 18,
        Vova = 19,
        Sasha = 20,
        Ksenia = 21,
        Default = 0,
    };
    string correctAlpha(string str);
    int correctCount(int count);
    void delimiter();
};