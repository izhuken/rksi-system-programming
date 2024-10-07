#include <iostream>
#include <cstring>
#include "../lib/core.h"

using namespace std;

void decrypt_page()
{
    int shift;
    char *encrypted_str = new char[100];

    cout << "Введите зашифрованную строку: " << endl;
    cin >> encrypted_str;

    cout << "Введите сдвиг (число, являющееся ключом): ";
    cin >> shift;

    encrypted_str = decrypt(encrypted_str, shift);

    cout << "Зашифрованная строка: " << encrypted_str << endl;

    delete[] encrypted_str;
}

void encrypt_page()
{
    int shift;
    char *raw_str = new char[100];

    cout << "Введите незашифрованную строку: " << endl;
    cin >> raw_str;

    cout << "Введите сдвиг (число, являющееся ключом): ";
    cin >> shift;

    raw_str = encrypt(raw_str, shift);

    cout << "Зашифрованная строка: " << raw_str << endl;

    delete[] raw_str;
}