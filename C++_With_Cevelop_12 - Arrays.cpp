#include<iostream>

using namespace std;

int main(){
	//array variable
	string name[3];
	name[0] = "King Tut";
	name[1] = "Tom Tucker";
	name[2] = "Eric Cartman";

	for (int i = 0; i < 3; i++)
	{
		cout << name[i] << ", " << endl;
	}
	
	cout << endl;

	return 0;
}
