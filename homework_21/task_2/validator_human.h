#include <string>

using namespace std;

namespace validatorHuman
{
    enum ageHuman
    {
        AdultAge = 18,
        ChildrenAge = 19,
        DefaultAge = 0,
    };
    string correctAlpha(string str);
    int correctCount(int count);
    void delimiter();
};