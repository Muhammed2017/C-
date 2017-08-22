/*
 * Square.cpp
 *
 *  Created on: Aug 22, 2017
 *      Author: m.abdalmagied
 */

#include "square.h"

int getSquareParameters(int sideLength){
	return sideLength*getSquareSides();
}

int getSquareSides(){
	return 4;
}
