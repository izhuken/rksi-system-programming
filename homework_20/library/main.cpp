#include "db_accessor.h"
#include "client_listener.h"
#include "book_listener.h"
#include "employee_listener.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
    DBAccessor *db_accessor = new DBAccessor();
    ClientListener *client_listener = new ClientListener(db_accessor);
    BookListener *book_listener = new BookListener(db_accessor);
    EmployeeListener *employee_listener = new EmployeeListener(db_accessor);

    cout << "Добро пожаловать в административную панель библиотеки!" << endl;

    while (true)
    {
        cout << "Введите номер раздела:" << endl
             << "1. Клиенты" << endl
             << "2. Книги" << endl
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
            book_listener->command();
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

    delete client_listener;
    delete book_listener;
    delete employee_listener;
    delete db_accessor;

    return 0;
}