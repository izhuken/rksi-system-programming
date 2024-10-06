#include <iostream>

using namespace std;

/*
Дан массив
int array[7] = {2, 3, 4, 5, 2, 8, 10};
Выведите на консоль все его элементы
*/

int main()
{
    int size = 7;
    int array[size] = {2, 3, 4, 5, 2, 8, 10};

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}