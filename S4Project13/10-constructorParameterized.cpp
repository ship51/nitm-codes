// Parameterized Constructor;

#include <iostream> 
using namespace std; 

class Numbers
{
	private:
		int x;
	public:
		Numbers(int i)		// Default constructor
		{	x = i;	}
		void show_data()
		{	cout << "\n x = " << x;	}
};

main()
{
	Numbers N(20);			// Parameterized constructor is called
	N.show_data();
}
