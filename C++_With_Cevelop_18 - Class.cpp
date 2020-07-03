#include<iostream>

using namespace std;

class tut{
public:
	tut();
	~tut();
	void printsomething();
private:

};

tut::tut()
{
	//cout << "I am a constructor" << endl;
};

tut::~tut()
{
	cout << "I am a destructor" << endl;
}

void tut::printsomething()
{
	cout << "stuff" << endl;
}

int main(){
	tut t;
	cout << "daklfj;dklfja;" << endl;
	return 0;
}

