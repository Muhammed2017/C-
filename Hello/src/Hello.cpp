//============================================================================
// Name        : Hello.cpp
// Author      : Muhammed Ahmad
// Version     : 1.0
// Copyright   : GNU
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int main(){
	int a = 5;
	int b = 6;
	cout << add(a,b) << endl;
}
