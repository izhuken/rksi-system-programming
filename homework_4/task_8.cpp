#include <iostream>
#include <cstring>

using namespace std;

/*
Подсчитайте количество прописных (заглавных) букв в строке.
char stroka[] = {"AaBbCcDdEeFfGgggggg"};
*/

int main() {
    int counter = 0;
    char stroka [] = {"AaBbCcDdEeFfGgggggg"};

    for (int i = 0; i < strlen(stroka); ++i) {
        if (stroka[i] >= 'A' && stroka[i] <= 'Z') {
            counter++;
        }
    }

    cout << "Кол-во заглавных букв: " << counter << endl;

    return 0;
}