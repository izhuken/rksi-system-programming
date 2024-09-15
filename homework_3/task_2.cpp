#include <iostream>

using namespace std;

/*
Напишите программу, которая возводит число 2 в степень 10 с помощью цикла while
*/

int main() {
    int i = 1;
    int number = 1;

    while (i <= 10) {
        number *= 2;
        i++;
    }

    cout << "2^10 = " << number << endl;

    return 0;
}