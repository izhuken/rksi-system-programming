#include <iostream>
#include <cstring>
#include <regex>

using namespace std;

char decrypt_symbol(char symbol, int shift);
char encrypt_symbol(char symbol, int shift);

char caesarCipher(char ch, int shift, bool encrypt)
{
    if (encrypt)
    {
        return encrypt_symbol(ch, shift);
    }
    return decrypt_symbol(ch, shift);
}

char decrypt_symbol(char symbol, int shift)
{
    if (isupper(symbol))
    {
        int decoded_char_code = int(symbol - shift - 65) % 26 + 65;
        return char(decoded_char_code);
    }
    int decoded_char_code = int(symbol - shift - 97) % 26 + 97;
    return char(decoded_char_code);
}

char encrypt_symbol(char symbol, int shift)
{
    if (isupper(symbol))
    {
        int encrypted_char_code = int(symbol + shift - 65) % 26 + 65;
        return char(encrypted_char_code);
    }

    int encrypted_char_code = int(symbol + shift - 97) % 26 + 97;
    return char(encrypted_char_code);
}