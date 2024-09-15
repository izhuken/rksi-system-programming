#include <iostream>

#define len(x) sizeof(x)/sizeof(x[0]);

using namespace std;

/*
Дан массив int arr[] = {5, 4, 3, 4, 9};
Найдите между самым большим и самым маленьким элементом.

*/

int main() {
    int array[5] = {5, 4, 3, 4, 9};
    int array_length = len(array);
    int maximal_number = array[0];
    int minimal_number = array[0];



    for (int i = 0; i < array_length; i++) {
        if (array[i] > maximal_number) {
            maximal_number = array[i];
        }
        if (array[i] < minimal_number) {
            minimal_number = array[i];
        }
    }

    cout << "Разница между самым большим и самым маленьким элементом: " << maximal_number - minimal_number << endl;
    return 0;
}