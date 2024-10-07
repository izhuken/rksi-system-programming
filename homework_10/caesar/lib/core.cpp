#include <iostream>
#include <cstring>

using namespace std;

char *decrypt(char *encrypted_string, int shift)
{
    char *decoded_string = new char[2];

    for (int i = 0; i < strlen(encrypted_string); i++)
    {
        char symbol = encrypted_string[i];

        if (isupper(symbol))
        {
            int decoded_char_code = int(symbol - shift - 65) % 26 + 65;
            decoded_string[i] = char(decoded_char_code);
            continue;
        }
        int decoded_char_code = int(symbol - shift - 97) % 26 + 97;
        decoded_string[i] = char(decoded_char_code);
        continue;
    }

    return decoded_string;
}

char *encrypt(char *raw_string, int shift)
{
    char *encrypted_string = new char[2];

    for (int i = 0; i < strlen(raw_string); i++)
    {
        char symbol = raw_string[i];

        if (isupper(symbol))
        {
            int encrypted_char_code = int(symbol + shift - 65) % 26 + 65;
            encrypted_string[i] = char(encrypted_char_code);
            continue;
        }
        int encrypted_char_code = int(symbol + shift - 97) % 26 + 97;
        encrypted_string[i] = char(encrypted_char_code);
        continue;
    }

    return encrypted_string;
}