#include "rectangle.h"

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 4);

	cout << rect1.convert() << endl;
	cout << "perimeter: " << rect1.perimeter() << endl;
	cout << "square: " << rect1.square() << endl;
	cout << "length of diagonal: " << rect1.diagonal() << endl;

	cout << rect2.convert() << endl;
	cout << "perimeter: " << rect2.perimeter() << endl;
	cout << "square: " << rect2.square() << endl;
	cout << "length of diagonal: " << rect2.diagonal() << endl;

	return 0;
}