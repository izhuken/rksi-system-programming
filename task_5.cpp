#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int numArray[5];

    cout << "Array values: " << endl;

    for (int i = 0; i < 5; i++)
    {
        numArray[i] = i * 2;
        cout << "Element " << i << ": " << numArray[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        sum += numArray[i];
    }

    cout << sum << endl;

    return 0;
}