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
	Point::Point(){
		this->x = 0;
		this->y = 0;
	}
	Point::Point(int x, int y){
		this->x = x;
		this->y = y;
	}
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
		p1.x = p.x + this->x;
		p1.y = p.y + this->y;

		return p1;
	}

	void Point::print() {
		cout << "Punto: (" << this->x << "," << this->y << ")." << endl;
	}
	void Point::swap1(Point p){
		int xTemporal = p.x;
		int yTemporal = p.y;
		p.x = this->x;
		p.y = this->y;
		this->x = xTemporal;
		this->y = yTemporal;
	}
	void Point::swap2(Point &p){
		int xTemporal = p.x;
		int yTemporal = p.y;
		p.x = this->x;
		p.y = this->y;
		this->x = xTemporal;
		this->y = yTemporal;
	}
	void Point::swap3(Point *p){
		int xTemporal = p->x;
		int yTemporal = p->y;
		p->x = this->x;
		p->y = this->y;
		this->x = xTemporal;
		this->y = yTemporal;
}
}
