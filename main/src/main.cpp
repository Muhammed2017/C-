//============================================================================
// Name        : main.cpp
// Author      : Muhammed Ahmad
// Version     : 1.0
// Copyright   : GNU
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "square.h"
using namespace std;

int main() {
	cout << "Square : " << getSquareSides() << "Sides" << endl;
	cout << "Square : " << getSquareParameters(5) << "Length" << endl;
	return 0;
}
