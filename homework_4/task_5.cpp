#include <iostream>

#define len(x) sizeof(x)/sizeof(x[0]);

using namespace std;

/*
Дан массив int arr[] = {5, 4, 3, 4, 9};
Найдите позицию максимального элемента массива.
*/

int main() {
    int array[5] = {5, 4, 3, 4, 9};
    int array_length = len(array);
    int maximal_number_index = 0;
    int maximal_number = array[maximal_number_index];



    for (int i = 0; i < array_length; i++) {
        if (array[i] > maximal_number) {
            maximal_number = array[i];
            maximal_number_index = i;
        }
    }

    cout << "Самое большое число: " << maximal_number << endl;
    cout << "Его индекс: " << maximal_number_index << endl;
    return 0;
}