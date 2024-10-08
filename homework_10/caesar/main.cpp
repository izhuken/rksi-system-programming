#include <iostream>
#include "branches/branches.h"

using namespace std;

int main()
{
    char mode;
    bool isWorking = true;

    cout << "Добро пожаловать в Ceasar CLI encryptor" << endl;

    while (isWorking)
    {

        cout << "Введите режим (D - расшифровать строку, E - зашифровать строку): ";
        cin >> mode;

        switch (mode)
        {
        case 'd':
        case 'D':
            decrypt_branch();
            break;
        case 'e':
        case 'E':
            encrypt_branch();
            break;
        default:
            isWorking = false;
            break;
        }
    }

    cout << "Спасибо за использование программы! " << "До свидания!" << endl;

    return 0;
}