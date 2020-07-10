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

	int get_length(){return this->length;};
	void set_length(int length) {
		this->length = length;
	}

	int getGasMillage() const {
		return this->gas_millage;
	}

	void setGasMillage(int gasMillage) {
		this->gas_millage = gasMillage;
	}

	string const& getName() const {
		return this->name;
	}

	void setName(string const &name) {
		this->name = name;
	}

	int getSpeed() const {
		return this->speed;
	}

	void setSpeed(int speed) {
		this->speed = speed;
	}

	int getWidth() const {
		return this->width;
	}

	void setWidth(int width) {
		this->width = width;
	}

	;

private:
	int length, width, speed, gas_millage;
	string name;
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
	Ferrari.set_length(200);
	Ferrari.setName("Ferrari Enzo");
	cout << Ferrari.getName() <<" is " << Ferrari.get_length() << " ft. long!" << endl;
	ford Ford;
	Ford.setName("Ford Fiesta");
	Ford.set_length(170);
	cout << Ford.getName() <<" is: " << Ford.get_length() << " ft. long!" << endl;
	return 0;
}

