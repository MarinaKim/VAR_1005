#include "var.h"

var::var(int intV) { this->intV = intV; this->intFlag = true; this->doubleFlag = false; this->stringFlag = false; }
var::var(double doubleV) { this->doubleV = doubleV; this->doubleFlag = true; this->intFlag = false;this->stringFlag = false; }
var::var(const char *stringV) {
	this->stringV = (char*)stringV;

	//strcpy(this->stringV, stringV);
	this->stringFlag = true;
	this->intFlag = false;
	this->doubleFlag = false;
}

var::operator int() { intFlag = true; return intV; }
var::operator double() { doubleFlag = true; return doubleV; }
var::operator char*() { stringFlag = true; return stringV; }

var var::operator+(int v)
{
	var tmp;
	if (intFlag)
	{
		tmp.intFlag = true;
		tmp.intV = this->intV + v;

	}
	else if (doubleFlag)
	{
		tmp.doubleFlag = true;
		tmp.doubleV = this->doubleV + v;
	}
	else if (stringFlag)
	{
		tmp.stringFlag = true;
		char buf[100];
		_itoa_s(v, buf, 10);
		int l = strlen(this->stringV);
		char * ptr = this->stringV;

		char *tmp_ptr;
		tmp.stringV = new char[size + 1];

		while (ptr != '\0')
		{
			*tmp_ptr++ = *ptr++;
		}
		/*strcpy(tmp.stringV, this->stringV);*/
		strcat(tmp.stringV, buf);

	}
	return tmp;
}
//
//var var::operator+(double v)
//{
//	return var();
//}
//
//var var::operator+(string v)
//{
//	return var();
//}

void var::show() {
	if (intFlag)
		cout << intV << endl;
	else if (doubleFlag)
		cout << doubleV << endl;
	else if (stringFlag)
		cout << stringV << endl;
}