#pragma once
#include "main.h"

class Rectangle
{
private:
	static int count;

	int a;
	int b;	

public:
	
	Rectangle(): a(1), b(1) {
		Rectangle::count++;
	}

	Rectangle(int a, int b) : a(a), b(b) {
		Rectangle::count++;
	}

	~Rectangle() {
		Rectangle::count--;
	}

	static int get_count() {
		return count;
	}

	int get_a();
	void set_a(int a1);
	int get_b();
	void set_b(int b1);	

	string convert();
};


