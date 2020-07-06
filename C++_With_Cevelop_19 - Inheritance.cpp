#include<iostream>

using namespace std;

//base class
class car{
public:
	car(){};
	~car(){};
	void printspeed(){cout << "it's unknown mph" << endl;};
	void howfast(int speed){
		if (speed > 50)
		{
			cout << "SOO Fast" << endl;
		}
		else
		{
			cout << "Average..." << endl;
		}

	};

private:

};

//derived class
class ferrari: public car{
public:
	ferrari(){};
	~ferrari(){};
private:

};

//derived class
class ford: public car{
public:
	ford(){};
	~ford(){};
private:

};



int main(){
	ferrari Ferrari;
	Ferrari.howfast(120);
	ford Ford;
	Ford.printspeed();
	return 0;
}

