#include <iostream>
#include <cstring>

using namespace std;

/*
Подсчитайте количество вхождений буквы "A" в этой строке.
char stroka[] = {"Aaa1323#aa"};
*/

int main() {
    int counter = 0;
    char stroka [] = {"Aaa1323#aa"};

    for (int i = 0; i < strlen(stroka); ++i) {
        // если нужно вхождение исключительно заглавной буквы 'A'
        // if (stroka[i] == 'A')
        if (stroka[i] == 'A' || stroka[i] == 'a') {
            counter++;
        }
    }

    cout << "Кол-во букв \'A\': " << counter << endl;

    return 0;
}