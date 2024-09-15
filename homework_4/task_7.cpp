#include <iostream>

using namespace std;

/*
Допишите программу по развороту динамического массива.

int size = 5;
int *a = new int[size];
for(int i = 0; i < size; ++i) {
    cin >> a[i];
}
for(){
}
for(int i = 0; i < size; ++i) {
    cout << a[i];
}
return 0;
*/

int main() {
    int size = 5;
    int *a = new int[size];
    int *reversedA = new int[size];

    for(int i = 0; i < size; ++i) {
        cin >> a[i];
    }

    for(int i = size - 1; i >= 0; --i) {
        reversedA[size - 1 - i] = a[i];
    }

    a = reversedA;

    for(int i = 0; i < size; ++i) {
        cout << a[i];
    }

    delete [] a;

    return 0;
}