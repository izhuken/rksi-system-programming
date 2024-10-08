#include <iostream>
#include "lib/calculate.h"

using namespace std;

int main()
{
    char operation;
    int firstOperand, secondOperand;
    bool isWorks = true;

    cout << "Добро пожаловать в калькулятор!" << endl;

    while (isWorks)
    {
        cout << "Введите операцию (+ - сложение, - - вычитание, * - умножение, / - деление, ! - факториал, ^ - степень, q - выход): ";
        cin >> operation;

        switch (operation)
        {
        case '+':
            cout << "Введите первое слагаемое: ";
            cin >> firstOperand;
            cout << "Введите второе слагаемое: ";
            cin >> secondOperand;
            cout << "Результат: " << add(firstOperand, secondOperand) << endl;
            break;
        case '-':
            cout << "Введите уменьшаемое: ";
            cin >> firstOperand;
            cout << "Введите вычитаемое: ";
            cin >> secondOperand;
            cout << "Результат: " << subtract(firstOperand, secondOperand) << endl;
            break;
        case '*':
            cout << "Введите первый множитель: ";
            cin >> firstOperand;
            cout << "Введите второй множитель: ";
            cin >> secondOperand;
            cout << "Результат: " << multiply(firstOperand, secondOperand) << endl;
        case '/':
            try
            {
                double result;

                cout << "Введите делимое: ";
                cin >> firstOperand;
                cout << "Введите делитель: ";
                cin >> secondOperand;

                result = divide(firstOperand, secondOperand);

                cout << "Результат: " << result << endl;
            }
            catch (const invalid_argument &e)
            {
                cout << "Ошибка: " << e.what() << endl;
            }
            break;
        case '!':
            cout << "Введите число для вычисление факториала: ";
            cin >> firstOperand;
            cout << "Результат: " << factorial(firstOperand) << endl;
            break;
        case '^':
            cout << "Введите основание степени: ";
            cin >> firstOperand;
            cout << "Введите показатель степени: ";
            cin >> secondOperand;
            cout << "Результат: " << power(firstOperand, secondOperand) << endl;
            break;
        case 'q':
        case 'Q':
            isWorks = false;
            break;
        default:
            cout << "Невалидная операция!" << endl;
        }
    }

    cout << "Спасибо за использование калькулятора!" << endl;
    cout << "До свидания!" << endl;

    return 0;
}