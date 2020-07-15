#include<iostream>

using namespace std;

//passing a value normally
void val_func(string name)
{
	name = "Batman";
}

//passing a value through reference
void ref_func(string &name)
{
	name = "Batman";
}

//passing a value through pointer
void point_func(string *name)
{
	string naming = *name;
	*name = "Batman";

}

class car{
public:
	car(){};
	~car(){};

	int getColor() const {
		return color;
	}

	void setColor(int color) {
		this->color = color;
	}

	int getMaxspeed() const {
		return maxspeed;
	}

	void setMaxspeed(int maxspeed) {
		this->maxspeed = maxspeed;
	}

	string const getMake() const {
		return make;
	}

	void setMake(string const make) {
		this->make = make;
	}

private:
	int maxspeed, color;
	string make;


};
































int main(){
	//Alternative way to define and initialize a class
	car *c = new car();
	c->setMake("Ford");

	cout << c->getMake() << endl;

	return 0;
}

