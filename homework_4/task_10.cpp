#include <iostream>
#include <cstring>

using namespace std;

/*
Дана строка, содержащая только строчные буквы. Замените все буквы в строке на заглавные, выведите результат.
char stroka[] = {"aaaabbbbccccdddd"};
*/

int main() {
    char stroka [] = {"aaaabbbbccccdddd"};

    for (int i = 0; i < strlen(stroka); ++i) { 
        stroka[i] = toupper(stroka[i]);
    }

    cout << stroka << endl;

    return 0;
}