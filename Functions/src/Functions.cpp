//============================================================================
// Name        : Functions.cpp
// Author      : Muhammed Ahmad
// Version     : 1.0
// Copyright   : GNU
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void doprint(){
	cout << "In DoPrint" << endl;
}

void printA(){
	cout << "A" << endl;
}

 void printB(){
	 cout << "B" << endl;
 }

 void printAB(){
	 printA();
	 printB();
 }

int getValuefromuser(){
	cout << "Enter Integer";
	int a;
	cin >> a;
	return a;
}

int main() {
	int x = getValuefromuser();
	int y = getValuefromuser();
	cout << x << "+" << y << "=" << x + y << endl;

	cout << "Starting Main" << endl;
	doprint();// prints Functions
	cout << "Ending main" << endl;

	cout << "Starting Main AB" << endl;
	printAB();
	cout << "Ending Main AB" << endl;
	return 0;
}
