#pragma once
#include "main.h"

class Rectangle
{
private:
	int a;
	int b;

public:
	Rectangle(): a(1), b(1) {}
	Rectangle(int a, int b) : a(a), b(b) {}

	int get_a();
	void set_a(int a1);
	int get_b();
	void set_b(int b1);

	int perimeter();
	int square();
	double diagonal();

	string convert();
};


