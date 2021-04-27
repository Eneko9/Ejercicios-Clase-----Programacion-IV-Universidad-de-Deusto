/*
 * Array.h
 *
 *  Created on: 26 abr. 2021
 *      Author: eneko
 */

#ifndef ARRAY_H_
#define ARRAY_H_
namespace containers
{
class ArrayInt {
	private:
		unsigned int capacity;
		int *array;
	public:
		ArrayInt();
		ArrayInt(unsigned int capacity);
		~ArrayInt();
		void setValue(unsigned int index, int data);
		int getValue(unsigned int index);
		void setCapacity(unsigned int capacity);
		unsigned int getCapacity();
};
}
#endif /* ARRAY_H_ */
