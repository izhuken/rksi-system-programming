#include <iostream>

using namespace std;

int main()
{
    int user_input;
    signed int sVal = -20;
    unsigned int uVal = 10;

    cout << "Unsigned Value: " << uVal << endl;
    cout << "Signed Value: " << sVal << endl;
    cout << "Enter a number: ";
    cin >> user_input;

    if (user_input < 0)
        cout << "Negative number!" << endl;
    else
        cout << "Positive number!" << endl;
    return 0;
}