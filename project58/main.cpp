#include "main.h"
#include "point.h"

int main() {
	Point p1(1, 1);
	Point p2(2, 5);

	cout << p1.info() << endl;
	cout << p2.info() << endl;

	Point p3 = p1.sum(p2) ;
	cout << p1.info() + " + " + p2.info() + " = " + p3.info() << endl;

	p3 = p1.mul(2);
	cout << p1.info() + " * " + "2" + " = " + p3.info() << endl;

	p3 = p1.sub(p2);
	cout << p1.info() + " - " + p2.info() + " = " + p3.info() << endl;


	/*p3 = p1 * p2;
	cout << p3.info() << endl;*/



	return 0;
}