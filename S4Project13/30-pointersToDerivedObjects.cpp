// Pointers to Derived Objects
#include <iostream>
#include <cstring>
using namespace std;

class B
{
	public:
		int b;
		void show()
		{
			cout << "show() of base class" << endl;
			cout << "b = " << b << endl << endl;
		}
};

class D : public B
{
	public:
		int d;
		void show()
		{
			cout << "show() of derived class" << endl;
			cout << "b = " << b << endl;
			cout << "d = " << d << endl << endl;
		}
};

int main()
{
	B *bptr;					// base class pointer
	B base;
	bptr = &base;

	cout << "base pointer points to base object \n";
	bptr -> b = 100;			// accessing class B via base pointer
	bptr -> show();

	D derived;
	bptr = &derived;
	cout << "base pointer now points to derived object \n";
	bptr -> b = 200;			// accessing class D via base pointer
	//bptr -> d = 300;

	bptr -> show();				// which show()?

	D *dptr;					// derived class pointer
	dptr = &derived;
	cout << "derived pointer points to derived object \n";
	dptr -> d = 300;
	dptr -> show();
	dptr -> b = 100;
	dptr -> show();

	cout << "using base pointer after type casting \n";
	((D *)bptr) -> d = 400;
	((D *)bptr) -> show();

	return 0;
}
