#include <iostream>
#include <fstream>
#include "teenager.h"
using namespace std;

int main()
{
	Teenager *first = new Teenager("First", "First", 11, 111, 111, 1, "first", "some pet");
	cout << *first;
	delete first;
	Adult *second = new Adult;
	Child *third = new Child;
	Adult *fourth = new Adult;
	Teenager *fifth = new Teenager;

	IHuman **arr = new IHuman *[4]{second, third, fourth, fifth};

	bool start = true;
	do
	{
		setlocale(LC_ALL, "");
		cout
			<< "Выберите тему курса: " << endl
			<< "1 = первый" << endl
			<< "2 = второй" << endl
			<< "3 = третий" << endl
			<< "4 = четвертый" << endl
			<< "0 = выход из программы" << endl;
		delimiter();

		char choice;
		cin >> choice;
		switch (choice)
		{
		case '1':
			arr[0]->readFromConsole();
			break;
		case '2':
			arr[1]->readFromConsole();
			break;
		case '3':
			arr[2]->readFromConsole();
			break;
		case '4':
			arr[3]->readFromConsole();
			break;
		case '0':
			for (int i = 0; i < 4; ++i)
			{
				arr[i]->display();
				delimiter();
			}
			start = false;
			break;
		default:
			break;
		}
	} while (start);

	ofstream out("human.txt", ios::out | ios::trunc);
	out.close();

	for (int i = 0; i < 4; ++i)
	{
		arr[i]->writeToFile();
		cout << "Человек \"" << arr[i]->getName() << "\" успешно записана в файл." << endl;
	}

	delete first;
	delete second;
	delete third;
	delete fourth;
	delete fifth;
	delete[] arr;

	return 0;
}