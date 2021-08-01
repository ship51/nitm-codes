// Default Constructor;

#include <iostream> 
using namespace std; 

class Numbers
{
	private:
		int x;
	public:
		Numbers()		// Default constructor
		{	x = 10;	}
		void show_data()
		{	cout << "\n x = " << x;	}
};

main()
{
	Numbers N;			// Default constructor is called
	N.show_data();
}
