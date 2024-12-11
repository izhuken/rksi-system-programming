#include "play.h"
#include "play_listener.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

using namespace std;

PlayListener::PlayListener(DBAccessor *db_accessor)
{
    this->db_accessor = db_accessor;
}

void PlayListener::command()
{
    cout << "Раздел \"выступления\"" << endl;

    cout << "Введите номер комманды:" << endl
         << "1. Вывод всех выступлений" << endl
         << "2. Создать выступление" << endl
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
    default:
        break;
    }
}

void PlayListener::display_all()
{
    cout << "Выступления:" << endl;
    Play **plays = this->db_accessor->get_plays();

    for (int i = 0; i < this->db_accessor->get_play_count(); i++)
    {
        cout << i + 1 << ". ";
        plays[i]->display();
    }
}

void PlayListener::create()
{
    cout << "Введите название выступления: ";
    string name;
    cin >> name;

    cout << "Введите дату выступления (формат - ДД-ММ-ГГГГ): ";
    string date;
    cin >> date;

    cout << "Введите зал выступления: ";
    string hall;
    cin >> hall;

    cout << "Введите стоимость выступления: ";
    float cost;
    cin >> cost;

    this->db_accessor->create_play(name, date, hall, cost);
}
