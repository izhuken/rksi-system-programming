#include <iostream>
#include <cstring>

using namespace std;

/*
Подсчитайте количество прописных (заглавных) букв в строке.
*/

int main()
{
    int counter = 0;
    char str[] = {"AKLJDSnmcbaslkdjchLKCJAC"};

    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            counter++;
        }
    }

    cout << "Кол-во заглавных букв: " << counter << endl;

    return 0;
}