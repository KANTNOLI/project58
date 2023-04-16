#pragma once
#include "main.h"

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int value1, int value2);

	int get_x();
	void set_x(int value);
	int get_y();
	void set_y(int value);

	string info();

	Point sum(Point point);
	Point sub(Point point);
	Point mul(int value);

	//Point static operator+(Point p1, Point p2) {
	//	int x = p1.x + p2.x;
	//	int y = p1.y + p2.y;
	//	return Point(x, y);
	//}


	//Point static operator+(Point p1, int value) {
	//	int x = p1.x + value;
	//	int y = p1.y + value;
	//	return Point(x, y);
	//}

	//Point static operator-(Point p1, int value) {
	//	int x = p1.x - value;
	//	int y = p1.y - value;
	//	return Point(x, y);
	//}

	//Point static operator-(Point p1, Point p2) {
	//	int x = p1.x - p2.x;
	//	int y = p1.y - p2.y;
	//	return Point(x, y);
	//}

	//Point static operator-(Point point) {
	//	return Point(-point.x, -point.y);
	//}

	//Point static operator+(Point point) {
	//	return Point(+point.x, +point.y);
	//}

	/*Point static operator*(Point point) {
		return Point(point.x, point.y);
	}


	int static operator*(Point p1, Point p2) {
		int result = (int)sqrt(pow((p1.x + p2.x), 2) + pow((p1.y + p2.y), 2));
		return result;
	}

	Point static operator*(Point p1, int value) {
		int x = p1.x * value;
		int y = p1.y * value;
		return Point(x, y);
	}*/

	// >= > < <= = 
};