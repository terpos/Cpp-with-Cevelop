#include "car.h"

car::car() {
	// TODO Auto-generated constructor stub

}

car::~car() {
	// TODO Auto-generated destructor stub
}

string const& car::getColor() const {
	return color;
}

void car::setColor(string const &color) {
	this->color = color;
}

string const& car::getMake() const {
	return make;
}

void car::setMake(string const &make) {
	this->make = make;
}

int car::getMaxSpeed() const {
	return max_speed;
}

void car::setMaxSpeed(int maxSpeed) {
	max_speed = maxSpeed;
}

string const& car::getModel() const {
	return model;
}

void car::print_car() {

	cout << "Make: " << getMake() << endl;
	cout << "Model: " << getModel() << endl;
	cout << "Color: " << getColor() << endl;
	cout << "Max Speed: " << getMaxSpeed() << "mph" << endl;
}

void car::setModel(string const &model) {
	this->model = model;
}
