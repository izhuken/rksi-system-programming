#include "router/router.h"
#include <iostream>

using namespace std;

int main()
{
    int router_status_code;
    char *mode = new char[1];

    cout << "Добро пожаловать в Ceasar CLI encryptor" << endl;
    cout << "Введите режим (D - расшифровать строку, E - зашифровать строку): ";

    cin >> mode;

    router_status_code = router(mode);

    delete[] mode;

    return 0;
}