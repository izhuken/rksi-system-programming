#include <iostream>

using namespace std;

int main()
{
    float fNum = 5.5;
    float *pFloat;

    int num = 5;
    int *pNum;

    int arr[5] = {1, 2, 3, 4, 5};

    pNum = &num;
    cout << "Number before: " << *pNum << endl;

    *pNum = 10;
    cout << "Number after: " << *pNum << endl;

    pFloat = &fNum;
    cout << "Float value: " << *pFloat << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}