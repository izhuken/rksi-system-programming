#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    float y = 3.14;
    char myChar = 'A';
    bool isTrue = true;

    if (x > 5)
    {
        cout << "x is greater than 5" << endl;
    }
    else
    {
        cout << "x is less or equal to 5" << endl;
    }

    cout << "Value of y: " << y << endl;
    cout << "Character: " << myChar << endl;

    if (isTrue)
    {
        cout << "Boolean: true" << endl;
        return 0;
    }

    cout << "Boolean: false" << endl;
    return 0;
}