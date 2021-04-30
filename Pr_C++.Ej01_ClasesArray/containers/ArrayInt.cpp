#include "ArrayInt.h"

#define DEFAULT_CAPACITY 10

namespace containers
{
	ArrayInt::ArrayInt()
	{
		this->capacity = DEFAULT_CAPACITY;
		array = new int[this->capacity];
	}

	ArrayInt::ArrayInt(unsigned int capacity)
	{
		this->capacity = capacity;
		array = new int[this->capacity];
	}

	ArrayInt::~ArrayInt()
	{
		delete[] array;
	}

	void ArrayInt::setValue(unsigned int index, int data)
	{
		if (index < this->capacity)
			array[index] = data;
	}

	int ArrayInt::getValue(unsigned int index)
	{
		return array[index];
	}

	void ArrayInt::setCapacity(unsigned int capacity)
	{
		int *previousArray = this->array;
		unsigned int previousCapacity = this->capacity;

		this->capacity = capacity;
		this->array = new int[this->capacity];

		unsigned int counter = 0;
		while (counter < previousCapacity && counter < capacity)
		{
			this->array[counter] = previousArray[counter];
			counter++;
		}

		delete[] previousArray;
	}

	unsigned int ArrayInt::getCapacity()
	{
		return this->capacity;
	}
}


