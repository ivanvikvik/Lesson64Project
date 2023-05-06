#include "manager.h"

int Manager::perimeter(Rectangle rect) {
	return (rect.get_a() + rect.get_b()) * 2;
}

int Manager::square(Rectangle rect) {
	return rect.get_a() * rect.get_b();
}

double Manager::diagonal(Rectangle rect) {
	return sqrt(rect.get_a() * rect.get_a() 
		+ rect.get_b() * rect.get_b());
}