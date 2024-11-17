#include "child.h"
#include "adult.h"
#include "human.h"
using namespace std;

/*
1. Реализуйте 2 класса-наследника – взрослый и ребенок.
2. Добавьте в классы-наследники как минимум по 1 полю, которое не может быть использовано
в родительском классе. Поля обозначьте как private.
3. Создайте необходимые конструкторы и геттеры/сеттеры.
4. Добавьте в классы-наследники как минимум по 1 методу – для вывода информации о данных.
5. Продемонстрируйте работу внесенных изменений в main.
*/

int main()
{
	Child *child_1 = new Child("Ivan", "Bel", ageHuman::Ivan, 84, 123, 4);
	child_1->displayChild();

	Child *child_2 = new Child("Ivan", "Bel", ageHuman::Ivan, 84, 123, 3);
	child_2->displayChild();

	Child *child_3 = new Child("Ivan", "Bel", ageHuman::Ivan, 84, 123, 2);
	child_3->displayChild();

	Adult *adult_1 = new Adult("Ivan", "Bel", ageHuman::Ivan, 84, 123, "Sumsung");
	adult_1->displayAdult();

	Adult *adult_2 = new Adult("Ivan", "Bel", ageHuman::Ivan, 84, 123, "Apple");
	adult_2->displayAdult();

	Adult *adult_3 = new Adult("Ivan", "Bel", ageHuman::Ivan, 84, 123, "Xiaomi");
	adult_3->displayAdult();

	delete child_1;
	delete child_2;
	delete child_3;
	delete adult_1;
	delete adult_2;
	delete adult_3;
	return 0;
}