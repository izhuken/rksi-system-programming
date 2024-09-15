#include <iostream>

using namespace std;

/*
Напишите программу, которая объявляет и инициализирует переменную
типа bool с именем flag и присваивает ей значение true. Затем
выведите на экран значение этой переменной в виде слов true или false.
*/

int main() {
    // bool flag = true;
    bool flag = false;

    if (flag) {
        cout << "true" << endl;
        return 0;
    }
    
    cout << "false" <<  endl;
    return 0;
}