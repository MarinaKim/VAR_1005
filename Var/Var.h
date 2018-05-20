#pragma once
#include "Library.h"
class var
{
private:
	int intV;
	double doubleV;
	char *stringV;
	bool intFlag;
	bool doubleFlag;
	bool stringFlag;

public:
	var() { intFlag = false;doubleFlag = false;stringFlag = false; };
	var(int intV);
	var(double doubleV);
	var(const char *stringV);

	operator int();
	operator double();
	operator char*();

	var operator+(int v);
	var operator+(double v);
	var operator + (const char* v);
	void show();
};
