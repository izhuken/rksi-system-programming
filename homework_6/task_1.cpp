#include <iostream>

using namespace std;

/*
Напишите функцию с именем square, которая принимает один параметр типа int и
возвращает его квадрат. В main запросите данные у пользователя и воспользуйтесь
функцией для вывода результата на экран.
*/

int square(int number);

int main()
{
    int number;
    int result;

    cout << "Введите число: ";
    cin >> number;

    result = square(number);

    cout << "Квадрат: " << result << endl;

    return 0;
}

int square(int number) { return number * number; }
