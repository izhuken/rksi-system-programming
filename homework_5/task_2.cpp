#include <iostream>

using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i <= 4; i++) {
        arr[i] = i * 2;
        cout << arr[i] << " ";
    }

    return 0;
}