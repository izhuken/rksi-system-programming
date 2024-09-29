#include <iostream>

#define len(x) sizeof(x) / sizeof(x[0]);

using namespace std;

/*
Напишите функцию `findCommonElements`, которая принимает два статических массива и
находит общие элементы. Используйте указатели для прохода по массивам. Верните
массив общих элементов и его размер.
*/

int *findCommonElements(int firstArray[], int secondArray[]);

int main()
{
    int firstArray[] = {1, 2, 3, 4, 5};
    int secondArray[] = {3, 4, 5, 6, 7};

    int *commonElements = findCommonElements(firstArray, secondArray);
    int commonElementSize = len(commonElements);

    cout << "Общие элементы: ";
    for (int i = 0; i < commonElementSize; ++i)
    {
        cout << commonElements[i] << " ";
    }
    cout << endl;

    delete[] commonElements;

    return 0;
}

int *findCommonElements(int firstArray[], int secondArray[])
{
    int firstArrayLength = len(&firstArray);
    int secondArrayLength = len(&secondArray);
    int maxCommonSize = min(firstArrayLength, secondArrayLength);

    int *commonElements = new int[maxCommonSize];
    int commonSize = 0;

    for (int *firstNumber = firstArray; firstNumber < firstArray + firstArrayLength; ++firstNumber)
    {
        for (int *secondNumber = secondArray; secondNumber < secondArray + secondArrayLength; ++secondNumber)
        {
            if (*firstNumber != *secondNumber)
                continue;

            bool alreadyExists = false;

            for (int i = 0; i < commonSize; ++i)
            {
                if (commonElements[i] == *firstNumber)
                {
                    alreadyExists = true;
                    break;
                }
            }

            if (!alreadyExists)
                commonElements[commonSize++] = *firstNumber;
        }
    }

    return commonElements;
}
