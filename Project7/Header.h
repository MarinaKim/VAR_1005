#pragma once

#include<iostream>
#include<string>
#include<locale>


class var {
	int intVal;

public:
	var(int v) { intVal = v; }
	operator int() { return intVal; }
};