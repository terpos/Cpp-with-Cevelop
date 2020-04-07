#include<iostream>

using namespace std;

int sum(int a, int b)
{
	return a+b;
}


int main(){
	int x,y;

	cout << "Enter First Number: ";
	cin >> x;
	cout << endl;

	cout << "Enter Second Number: ";
	cin >> y;
	cout << endl;

	cout << "The sum of two numbers is: ";
	cout << sum(x, y) << endl;

	return 0;
}
