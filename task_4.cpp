#include <iostream>

using namespace std;

int main()
{
    float num;
    cin >> num;

    int numInt = int(num);

    cout << "Целое число: " << numInt << endl;

    if (numInt == 5)
    {
        cout << "numInt равно 5";
    }
    return 0;
}
