#include "client_listener.h"
#include "client.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

using namespace std;

ClientListener::ClientListener(DBAccessor *db_accessor)
{
    this->db_accessor = db_accessor;
};

void ClientListener::command()
{
    cout << "Раздел \"клиенты\"" << endl;

    cout << "Введите номер комманды:" << endl
         << "1. Вывод всех клиентов" << endl
         << "2. Создать клиента" << endl
         << "3. Провести транзакцию" << endl
         << "q. Выход" << endl;

    char command;
    cin >> command;

    switch (command)
    {
    case '1':
        this->display_all();
        break;

    case '2':
        this->create();
        break;
    case '3':
        this->transaction();
        break;
    default:
        break;
    }
};

void ClientListener::display_all()
{
    cout << "Клиенты:" << endl;
    Client **clients = this->db_accessor->get_clients();
    for (int i = 0; i < this->db_accessor->get_client_count(); i++)
    {
        cout << i + 1 << ". ";
        clients[i]->display();
    }
}

void ClientListener::create()
{
    cout << "Введите имя клиента: ";
    string name;
    cin >> name;

    cout << "Введите номер телефона клиента: ";
    string phone;
    cin >> phone;

    this->db_accessor->create_client(name, phone);
};

void ClientListener::transaction()
{
    cout << "Введите имя клиента: ";
    string client_name;
    cin >> client_name;

    cout << "Введите имя спектакля: ";
    string play_name;
    cin >> play_name;

    bool result = this->db_accessor->ticket_transaction(client_name, play_name);

    if (!result)
    {
        cout << "Ошибка транзакции";
        return;
    }

    cout << "Транзакция успешно проведена";
    return;
};