#include "human_class.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
1. Добавьте конструкторы и в ваш класс (по умолчанию и параметризованные для каждого набора полей).
В main создайте объекты под каждый конструктор, как минимум 2 из объектов должны быть динамическими.
Выведите данные в консоль.

2. Добавьте деструктор в ваш класс. Продемонстрируйте работу конструкторов и деструктора в зависимости
от области видимости объектов класса.

3. Создайте геттеры и сеттеры для приватных полей класса. Как минимум в 2 сеттера добавьте проверку вносимых данных.
Продемонстрируйте работу с ограничениями в консоли.

*/

int main()
{
    HumanClass humanClass1({"Антошка"});
    HumanClass *humanClass2 = new HumanClass({"Виталя"}, {"Петров"});
    HumanClass *humanClass4 = new HumanClass({"Анатолий"}, {"Петров"}, 46, 77);

    humanClass1.setAge(0);
    (*humanClass2).setWeight(-20.0);

    {
        HumanClass *humanClass3 = new HumanClass({"Иван"}, {"Петров"}, 46);
        delete humanClass3;

        {
            HumanClass *humanClass5 = new HumanClass({"Николай"}, {"Петров"}, 46, 77.00, 180.00);
            delete humanClass5;
        }
    }

    delete humanClass2;
    delete humanClass4;

    return 0;
}