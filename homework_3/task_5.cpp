#include <iostream>

using namespace std;

/*
Перепишите данный код, с использованием цикла for: 

int x = 10;

while (x > 0) {
    cout << x << endl;
    x -= 2;
}
*/

int main() {
    int x = 10;

    for (x; x > 0; x -= 2) {
        cout << x << endl;
    }
    
    return 0;
}