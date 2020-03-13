//============================================================================
// Name        : king_tut.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int x = 3;
	int y = 4;

	//and logic
	if (x == 3 && y < 1)
	{
		cout << "x is equal to 3 and y is greater than 1" << endl;
	}


	//or logic
	if (x == 3 || y < 1)
	{
		cout << "x is equal to 3 or y is greater than 1" << endl;
	}


	//not logic
	int a = 1;

	if(a != 1)
	{
		cout << "A is anything but 1" << endl;
	}

	//not logic with boolean variable
	bool ishere = false;

	if (!ishere)
	{
		cout << "not here" << endl;
	}


	return 0;
}
