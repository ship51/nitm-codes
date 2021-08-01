// Copy Constructor;

#include <iostream>
using namespace std;

class Numbers
{
	private:
		int x;
	public:
		Numbers(Numbers & N)		// Copy constructor
		{	x = N.x;	}
		Numbers(int i)
		{	x = i;	}
		void show_data()
		{	cout << "\n x = " << x;	}
};

main()
{
	Numbers N1(25);			// Parameterized constructor is called

	Numbers N2(N1);			// Copy constructors is called
	N2.show_data();

	Numbers N3 = N1;		// Copy constructor is called
	N3.show_data();
}
