/*
 * Array.cpp
 *
 *  Created on: 26 abr. 2021
 *      Author: eneko
 */

#include "ArrayInt.h"
#define DEFAULT_CAPACITY 15

namespace containers
{
	ArrayInt::ArrayInt(){
		this->capacity = DEFAULT_CAPACITY;
		array = new int[this->capacity];
	}
	ArrayInt::ArrayInt(unsigned int capacity){
		this->capacity = capacity;
		array = new int[this->capacity];
	}
	ArrayInt::~ArrayInt(){
		delete[] array;
	}
	void ArrayInt::setValue(unsigned int index, int data){
		if(index<this->capacity){
			array[index] = data;
		}
	}
	int ArrayInt::getValue(unsigned int index){
		int data;
		if(index<this->capacity){
			data = array[index];
		}
		return data;
	}
	void ArrayInt::setCapacity(unsigned int capacity){

		int* arrayAnterior = this->array;
		int capacidadAnterior = this->capacity;

		this->capacity = capacity;
		//this->array = new ArrayInt[this->capacity];

		unsigned int contador;
		while(contador< capacidadAnterior && contador< this->capacity){
			this->array[contador] = arrayAnterior[contador];
			contador++;
		}
		delete[] arrayAnterior;
	}
	unsigned int ArrayInt::getCapacity(){

		return this->capacity;
	}
}

