#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int *ptrA;
    int *ptrB;
    int *ptrC;

    ptrA = &a;
    ptrB = &b;
    ptrC = &c;

    cout << "Value of a: " << *ptrA << endl;
    cout << "Value of b: " << *ptrB << endl;

    *ptrA = *ptrB;
    cout << "After assigning b to a: " << *ptrA << endl;

    cout << "Value of c: " << *ptrC << endl;

    cout << "End of program." << endl;

    return 0;
}