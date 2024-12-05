#include "Ihuman.h"
#include "adult.h"
#include "child.h"
#include <iostream>
using namespace std;

int main()
{
	Adult first("FirstName", "FirstSurname", ageHuman::Default, 11, 111, "Some job");
	Child second("SecondName", "SecondSurname", ageHuman::Default, 22, 222, 4);
	Adult *third = new Adult("ThirdName", "ThirdSurname", ageHuman::Default, 33, 333, "Some job 2");
	Child *fourth = new Child("FourthName", "FourthSurname", ageHuman::Default, 44, 444, 4);
	Adult fifth("FifthName");

	IHuman **arr = new IHuman *[5]{&first, &second, third, fourth, &fifth};

	bool start = true;

	do
	{
		setlocale(LC_ALL, "");
		std::cout
			<< "Выберите человека, которого хотите вывести: 1 = первый, 2 = второй, 3 = третий, 4 = четвертый, 5 = вывести всех, 0 = выйти из программы"
			<< std::endl;
		delimiter();

		char choice;
		std::cin >> choice;
		switch (choice)
		{
		case '1':
			arr[0]->display();
			delimiter();
			break;
		case '2':
			arr[1]->display();
			delimiter();
			break;
		case '3':
			arr[2]->display();
			delimiter();
			break;
		case '4':
			arr[3]->display();
			delimiter();
			break;
		case '5':
			for (int i = 0; i < 5; ++i)
			{
				arr[i]->display();
				delimiter();
			}
			break;
		case '0':
			start = false;
			break;
		default:
			break;
		}
	} while (start);

	delete third;
	delete fourth;
	delete[] arr;
	return 0;
}