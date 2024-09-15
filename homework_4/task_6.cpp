#include <iostream>

#define len(x) sizeof(x)/sizeof(x[0]);

using namespace std;

/*
Допишите программу, которая будет считать сумму элементов динамического массива:
int size = 10;
int *a = new int[size];
int sum = 0;
for(int i = 0; i < size; ++i) {
    a[i] = 1;
}
for(int i = 0; i < size; ++i) {
}
*/

int main() {
    int size = 10;
    int *a = new int[size];
    int sum = 0;

    for(int i = 0; i < size; ++i) {
        a[i] = 1;
    }

    for(int i = 0; i < size; ++i) {
        sum += a[i];
    }

    cout << sum << endl;

    delete [] a;

    return 0;
}