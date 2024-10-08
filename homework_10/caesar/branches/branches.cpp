#include <iostream>
#include <cstring>
#include "../lib/core.h"

using namespace std;

void encrypt_branch()
{
    int shift = 3;
    string raw_string;

    cout << "Введите сдвиг (число, являющееся ключом): ";
    cin >> shift;

    cout << "Введите расшифрованную строку:" << endl;
    cin >> raw_string;

    for (int i = 0; i < raw_string.length(); i++)
    {
        if (!isalpha(raw_string[i]))
        {
            continue;
        }

        raw_string[i] = caesarCipher(raw_string[i], shift, true);
    }

    cout << "Зашифрованная строка: " << raw_string << endl;
}

void decrypt_branch()
{
    int shift = 3;
    string raw_string;

    cout << "Введите сдвиг (число, являющееся ключом): ";
    cin >> shift;

    cout << "Введите зашифрованную строку:" << endl;
    cin >> raw_string;

    for (int i = 0; i < raw_string.length(); i++)
    {
        if (!isalpha(raw_string[i]))
        {
            continue;
        }

        raw_string[i] = caesarCipher(raw_string[i], shift, false);
    }

    cout << "Расшифрованная строка: " << raw_string << endl;
}