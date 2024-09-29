#include <cmath>
#include <iostream>

using namespace std;

/*
Напишите функцию sqrti, которая принимает вещественное число x и возвращает
квадратный корень из x. Если x отрицательное, то функция должна сгенерировать
исключение типа с сообщением “Negative argument”;
*/

float sqrti(float number);

int main()
{
    float number;
    float result;

    cout << "Введите число: ";
    cin >> number;

    result = sqrti(number);

    cout << "Квадратный корень: " << result << endl;

    return 0;
}

float sqrti(float number)
{
    if (number < 0)
    {
        throw std::invalid_argument("received negative value");
    }

    return sqrt(number);
}