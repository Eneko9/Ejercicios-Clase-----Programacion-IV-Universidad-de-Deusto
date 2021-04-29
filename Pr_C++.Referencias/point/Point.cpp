/*
 * Point.cpp
 *
 *  Created on: 29 abr. 2021
 *      Author: eneko
 */

#include "Point.h"
#include <iostream>
using namespace std;
namespace point {
	void Point::suma1(Point p) {
		this->x += p.x;
		this->y += p.y;
	}
	void Point::suma2(Point &p) {
		this->x += p.x;
		this->y += p.y;
	}
	void Point::suma3(Point *p) {
		this->x += p->x;
		this->y += p->y;
	}

	Point Point::getSuma(Point &p) {
		Point p1;
		p.x = p.x + this->x;
		p.y = p.y + this->y;

		return p1;
	}

	void Point::print() {
		cout << "Punto: (" << this->x << "," << this->y << ")." << endl;
	}
}
