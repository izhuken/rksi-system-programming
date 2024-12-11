#include "db_accessor.h"
#include "play_listener.h"
#include "client_listener.h"
#include "employee_listener.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
    DBAccessor *db_accessor = new DBAccessor();
    PlayListener *play_listener = new PlayListener(db_accessor);
    ClientListener *client_listener = new ClientListener(db_accessor);
    EmployeeListener *employee_listener = new EmployeeListener(db_accessor);

    cout << "Добро пожаловать в административную панель театра!" << endl;

    while (true)
    {
        cout << "Введите номер раздела:" << endl
             << "1. Клиенты" << endl
             << "2. Выступления" << endl
             << "3. Сотрудники" << endl
             << "q. Выход" << endl;

        char command;
        cin >> command;

        switch (command)
        {
        case '1':
            client_listener->command();
            break;

        case '2':
            play_listener->command();
            break;

        case '3':
            employee_listener->command();
            break;

        default:
            break;
        }

        if (command == 'q')
        {
            break;
        }
    }

    cout << "До свидания!" << endl;

    delete play_listener;
    delete client_listener;
    delete employee_listener;
    delete db_accessor;

    return 0;
}