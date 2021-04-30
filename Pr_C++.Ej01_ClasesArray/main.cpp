#include <iostream>

#include "containers/ArrayInt.h"

using namespace std;
using namespace containers;

void printArray(ArrayInt *arrayInt)
{
	unsigned int counter = 0;
	while (counter < arrayInt->getCapacity())
	{
		cout << arrayInt->getValue(counter) << endl;
		counter++;
	}
}

int main()
{
	ArrayInt arrayInt(10);
	for (int i = 0; i < 15; i++)
		arrayInt.setValue(i, i);

	printArray(&arrayInt);

	arrayInt.setCapacity(5);

	cout << endl;
	cout << endl;

	printArray(&arrayInt);

	return 0;
}



