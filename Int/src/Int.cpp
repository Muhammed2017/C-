//============================================================================
// Name        : Int.cpp
// Author      : Muhammed Ahmad
// Version     : 1.0
// Copyright   : GNU
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>

int main (){
	int x = 5;
	x = x-2;
	std::cout<< x << std::endl;//#1

	int y = x;
	std::cout<< y << std::endl;//#2

	std::cout<< y+x << std::endl;//#3

	std::cout<< x << std::endl;//#4

	std::cout<< "Enter No.";
	std::cin>> x;
	std::cout<< "Your No. is "<< x << std::endl;


	return 0;
}
