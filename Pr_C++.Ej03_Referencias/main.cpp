/*
 * main.cpp
 *
 *  Created on: 29 abr. 2021
 *      Author: eneko
 */
#include <iostream>
#include "point/Point.h"

using namespace std;
using namespace point;
int main(void){
	Point p1(2,4);
	Point p2(1,1);
	p1.suma1(p2);
	p1.print();
	p1.suma2(p2);
	p1.print();
	p1.suma3(&p2);
	p1.print();
	(p1.getSuma(p2)).print();
	p1.swap1(p2);
	p1.print();
	p1.swap2(p2);
	p1.print();
	p1.swap3(&p2);
	p1.print();
}
