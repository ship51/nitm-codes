// Virtual Functions
#include <iostream>
#include <cstring>
using namespace std;

class Base
{
	public:
		void display() {cout << "\n Display: Base ";}
		virtual void show() {cout << "\n Show: Base ";}
};

class Derived : public Base
{
	public:
		void display() {cout << "\n Display: Derived";}
		void show() {cout << "\n Show: Derived";}
};

int main()
{
	Base B;
	Derived D;
	Base *bptr;

	cout << "\n\n base pointer points to Base \n";
	bptr = &B;
	bptr -> display();			// calls Base version
	bptr -> show();				// calls Base version

	cout << "\n\n base pointer points to Derived \n";
	bptr = &D;
	bptr -> display();			// calls Base version
	bptr -> show();				// calls Derived version

	Derived *dptr;
//	dptr = &B;                //invalid as pointer to derived cannot point to base object

	cout << "\n\n derived pointer points to Derived \n";
	dptr = &D;
	dptr -> display();
	dptr -> show();

	return 0;
}
