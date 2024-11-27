#include "child.h"
#include "adult.h"
#include "human.h"
using namespace std;

/*
1. Обозначьте необходимые функции в родительском классе виртуальными, при необходимости переопределите
их в дочерних классах (реализация полиморфизма).
2. Дополните дочерние классы деструкторами.
3. Продемонстрируйте работу внесенных изменений в main с помощью массива, указателей и цикла For:
создайте по 2 объекта дочерних классов (1 статический, 1 динамический) и примените к ним переопределенные функции.

*/

int main()
{
	Child *child_1 = new Child("Ivan", "Bel", ageHuman::Ivan, 84, 123, 4);
	Child child_2 = Child("Ivan", "Bel", ageHuman::Ivan, 84, 123, 3);
	Adult *adult_1 = new Adult("Ivan", "Bel", ageHuman::Ivan, 84, 123, "Sumsung");
	Adult adult_2 = Adult("Ivan", "Bel", ageHuman::Ivan, 84, 123, "Apple");

	Human **array = new Human *[4]{child_1, &child_2, adult_1, &adult_2};
	Human *array_2[4] = {child_1, &child_2, adult_1, &adult_2};

	for (int i = 0; i < 4; ++i)
	{
		array[i]->display();
		delimiter();
	}

	delimiter();

	for (int i = 0; i < 4; ++i)
	{
		array_2[i]->display();
		delimiter();
	}

	delete child_1;
	delete adult_1;
	delete[] array;

	return 0;
}