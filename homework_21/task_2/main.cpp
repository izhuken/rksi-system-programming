#include <iostream>
#include <fstream>
#include "child.h"
#include "adult.h"
#include "teenager.h"
using namespace std;

int main()
{
	Teenager *first = new Teenager("First", "First", 11, 111, 111, 1, "first", "some pet");
	Adult *second = new Adult;
	Child *third = new Child;
	Adult *fourth = new Adult;

	IHuman **arr = new IHuman *[4]{first, second, third, fourth};

	bool start = true;
	do
	{
		setlocale(LC_ALL, "");
		cout
			<< "Выберите действие: " << endl
			<< "1 = вывести первого" << endl
			<< "2 = вывести второго" << endl
			<< "3 = вывести третьего" << endl
			<< "4 = вывести четвертого" << endl
			<< "5 = заполнить первого" << endl
			<< "6 = заполнить второго" << endl
			<< "7 = заполнить третьего" << endl
			<< "8 = заполнить четвертого" << endl
			<< "0 = выход из программы" << endl;
		delimiter();

		char choice;
		cin >> choice;
		switch (choice)
		{
		case '1':
			arr[0]->display();
			break;
		case '2':
			arr[1]->display();
			break;
		case '3':
			arr[2]->display();
			break;
		case '4':
			arr[3]->display();
			break;
		case '5':
			arr[0]->readFromConsole();
			break;
		case '6':
			arr[1]->readFromConsole();
			break;
		case '7':
			arr[2]->readFromConsole();
			break;
		case '8':
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
	delete[] arr;

	return 0;
}