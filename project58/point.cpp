#include "point.h"

Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int value1, int value2) {
	x = value1;
	y = value2;
}

int Point::get_x() {
	return x;
}
void Point::set_x(int value) {
	x = value;
}
int Point::get_y() {
	return y;
}
void Point::set_y(int value) {
	y = value;
}

string Point::info() {
	return "point: x " + to_string(x) + " : " + "y " + to_string(y);
}


Point Point::sum(Point point) {
	int x1 = x + point.x;
	int y1 = y + point.y;

	return Point(x1, y1);
}
Point Point::sub(Point  point) {
	int x1 = x - point.x;
	int y1 = y - point.y;

	return Point(x1, y1);
}
Point Point::mul(int value) {
	int x1 = x * value;
	int y1 = y * value;

	return Point(x1, y1);
}
