#include <iostream>

#define len(x) sizeof(x)/sizeof(x[0]);

using namespace std;

/*
Дан массив int array[7] = {2, 3, 4, 5, 2, 8, 10};. Выведите на консоль все его элементы.
*/

int main() {
    int array[7] = {2, 3, 4, 5, 2, 8, 10};
    int array_length = len(array);

    for (int i = 0; i < array_length; i++) {
        cout << array[i] << endl;
    }

    return 0;
}