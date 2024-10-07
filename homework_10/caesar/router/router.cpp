#include <iostream>
#include "../pages/pages.h"

using namespace std;

int router(char mode[])
{
    int mode_length = sizeof(*mode) / sizeof(char);

    if (mode_length <= 0)
    {
        return 1;
    }

    if (mode[0] == 'D' || mode[0] == 'd')
    {
        decrypt_page();
        return 0;
    }

    if (mode[0] == 'E' || mode[0] == 'e')
    {
        encrypt_page();
        return 0;
    }

    cout << "Хуйня" << endl;
    return 1;
}