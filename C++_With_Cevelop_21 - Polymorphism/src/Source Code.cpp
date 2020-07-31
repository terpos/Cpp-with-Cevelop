#include<iostream>

using namespace std;



class car{
public:
	car(){};
	~car(){};

	virtual void print_car_type() = 0;

private:

};


class ferrari: public car{
public:
	ferrari(){};
	~ferrari(){};

	void print_car_type()
	{
		cout << "I am a ferrari!!" << endl;
	};

private:

};

class ford: public car{
public:
	ford(){};
	~ford(){};

	void print_car_type()
	{
		cout << "I am a ford!!" << endl;
	};

private:

};


class chevy: public car{
public:
	chevy(){};
	~chevy(){};

	void print_car_type()
	{
		cout << "I am a chevy!!" << endl;
	};

private:

};




int main(){
	//Alternative way to define and initialize a class
	car *c = new ferrari();
	c->print_car_type();
	return 0;
}

