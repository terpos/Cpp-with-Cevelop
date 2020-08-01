#include <iostream>

#ifndef CAR_H_
#define CAR_H_
using namespace std;
class car {
public:
	car();
	~car();

	//prints the info of a car
	virtual void print_car();

	//gets and sets color of the car
	string const& getColor() const;
	void setColor(string const &color);

	//gets and sets the make of the car
	string const& getMake() const;
	void setMake(string const &make);

	//gets and sets the max speed of the car
	int getMaxSpeed() const;
	void setMaxSpeed(int maxSpeed);

	//gets and sets the model of the car
	string const& getModel() const;
	void setModel(string const &model);

private:
	int max_speed;
	string make, model, color;
};

#endif /* CAR_H_ */
