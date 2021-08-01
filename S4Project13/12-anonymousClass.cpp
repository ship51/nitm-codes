// Anonymous Classes
#include <iostream>
#include <string.h>
using namespace std; 

class
{
	private:
		int x;
	public:
		void get_data()
		{
			cout << "\n Enter the value of x: ";
			cin >> x;
		}
		void show_data()
		{
			cout << "\n x = " << x;
		}
} obj1;

main()
{
	obj1.get_data();
	obj1.show_data(); 
}
