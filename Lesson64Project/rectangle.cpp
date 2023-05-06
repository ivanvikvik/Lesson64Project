#include "rectangle.h"

int Rectangle::get_a() {
	return a;
}

void Rectangle::set_a(int a1) {
	if (a1 > 0) {
		a = a1;
	}
}

int Rectangle::get_b() {
	return b;
}

void Rectangle::set_b(int b1) {
	b = b1 > 0 ? b1 : b;
}

int Rectangle::perimeter() {
	return (a + b) * 2;
}

int Rectangle::square() {
	return a * b;
}

double Rectangle::diagonal() {
	// code from Genrich
	return sqrt(a * a + b * b);
}

string Rectangle::convert() {
	return "Rectangle: a = " + to_string(a)
		+ ", b = " + to_string(b);
}