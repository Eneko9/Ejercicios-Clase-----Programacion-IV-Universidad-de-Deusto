/*
 * Point.h
 *
 *  Created on: 29 abr. 2021
 *      Author: eneko
 */

#ifndef POINT_H_
#define POINT_H_

namespace point
{
class Point {
private:
	float x,y;
public:
	Point(int x, int y);

	void suma1(Point p);
	void suma2(Point &p);
	void suma3(Point *p);
	Point getSuma(Point &p);
	void print();
};
}
#endif /* POINT_H_ */
