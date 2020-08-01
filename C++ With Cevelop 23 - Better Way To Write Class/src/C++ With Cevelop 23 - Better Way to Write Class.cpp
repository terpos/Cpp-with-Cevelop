#include<iostream>
#include "car.h"
#include "Ferrari.h"
#include "Ford.h"
#include "Chevy.h"

using namespace std;

int main(){
	car *ferrari = new Ferrari();
	car *ford = new Ford();
	car *chevy = new Chevy();

	//prints info on ferrari
	ferrari->print_car();
	cout << endl;
	//prints info on ford
	ford->print_car();
	cout << endl;
	//prints info on chevy
	chevy->print_car();

	return 0;
}

