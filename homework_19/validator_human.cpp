#include <iostream>
#include <string>
#include "validator_human.h"

using namespace std;

string validatorHuman::correctAlpha(string str)
{
    setlocale(LC_ALL, "");
    for (int i = 0; i < str.length(); ++i)
    {
        if (!isalpha(str.at(i)) && !ispunct(str.at(i)))
        {
            cout << str;
            cout << "Некорректный ввод данных в поле" << endl
                 << "__________________________" << endl;
            return "undefined";
        }
    }
    if (str != "undefined")
    {
        return str;
    }

    return "undefined";
}

int validatorHuman::correctCount(int count)
{
    setlocale(LC_ALL, "");
    if (count >= 0)
        return count;
    else
    {
        cout << "Некорректный ввод данных в поле" << endl
             << "_________________________________" << endl;
        return 0;
    }
}

void validatorHuman::delimiter()
{
    cout << "_________________________________" << endl;
}