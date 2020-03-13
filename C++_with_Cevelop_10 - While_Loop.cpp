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

	int input = -1;

	while (input != 0)
	{
		cout << "Enter a number: ";
		cin >> input;

		if (input != 0)
		{
			cout << "You Entered: " << input << endl;
		}
	}

	return 0;
}
