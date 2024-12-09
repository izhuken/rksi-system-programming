#include "book_listener.h"
#include "book.h"
#include "db_accessor.h"
#include "dto.h"

#include <string>
#include <iostream>

using namespace std;

BookListener::BookListener(DBAccessor *db_accessor)
{
    this->db_accessor = db_accessor;
};

void BookListener::command()
{
    cout << "Раздел \"книги\"" << endl;

    cout << "Введите номер комманды:" << endl
         << "1. Вывод всех книг" << endl
         << "2. Создать книгу" << endl
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

void BookListener::display_all()
{
    cout << "Книги:" << endl;
    Book **books = this->db_accessor->get_books();
    for (int i = 0; i < this->db_accessor->get_book_count(); i++)
    {
        cout << i + 1 << ". ";
        books[i]->display();
    }
}

void BookListener::create()
{
    cout << "Введите название книги: ";
    string name;
    cin >> name;

    cout << "Введите описание книги: ";
    string description;
    cin >> description;

    cout << "Введите цену книги: ";
    float cost;
    cin >> cost;

    cout << "Введите количество книг: ";
    int quantity;
    cin >> quantity;

    cout << "Введите автора книги: ";
    string author;
    cin >> author;

    this->db_accessor->create_book(name, description, cost, quantity, author);
}
