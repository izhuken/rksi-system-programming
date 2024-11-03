#include <iostream>
#include <cmath>
#include "animal_class.h"

using namespace std;

/*
1. Добавьте конструкторы и в ваш класс (по умолчанию и параметризованные для каждого набора полей).
В main создайте объекты под каждый конструктор, как минимум 2 из объектов должны быть динамическими.
Выведите данные в консоль.

2. Добавьте деструктор в ваш класс. Продемонстрируйте работу конструкторов и деструктора в зависимости
от области видимости объектов класса.

3. Создайте геттеры и сеттеры для приватных полей класса. Как минимум в 2 сеттера добавьте проверку
вносимых данных. Продемонстрируйте работу с ограничениями в консоли.

*/

int main()
{
    AnimalClass animalClass1({"Котик"});
    AnimalClass *animalClass2 = new AnimalClass({"Попугай"}, {"Неразлучник"});

    animalClass1.setAge(-2);
    (*animalClass2).setWeight(-3);

    {
        AnimalClass animalClass2({"Котик"}, {"Русская голубая"}, {"Серый"});
        AnimalClass *animalClass4 = new AnimalClass({"Попугай"}, {"Неразлучник"}, {"Цветной"}, 5);

        {
            AnimalClass *animalClass5 = new AnimalClass({"Мышь"}, {"Дамбо"}, {"Белая"}, 1, 0.4);

            delete animalClass5;
        }

        delete animalClass4;
    }

    delete animalClass2;
    return 0;
}
