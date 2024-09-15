#include <iostream>

using namespace std;

int main()
{
    float fValue = 3.14;
    float *pfValue;

    int arr[] = {1, 2, 3, 4, 5};
    int *pArr;

    pfValue = &fValue;
    pArr = arr;

    cout << "Float value: " << *pfValue << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i <= 5; i++)
    {
        cout << pArr[i] << " ";
    }

    cout << endl;

    pfValue = nullptr;

    return 0;
}