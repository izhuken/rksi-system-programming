#include <iostream>
#include <cstring>

using namespace std;

/*
Подсчитайте количество вхождений буквы "A" в строке.
Не забывайте, что буква "A" должна быть английской, а не русской
*/

int main()
{
    int counter = 0;
    char str[] = {"asdksjfklJSGHDFASdsad"};

    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] == 'A' || str[i] == 'a')
        {
            counter++;
        }
    }

    cout << "Кол-во букв \'A\': " << counter << endl;

    return 0;
}