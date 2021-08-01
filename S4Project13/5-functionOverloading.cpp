// Function overloading
#include <iostream>					
using namespace std;
void show(int val)
{
	cout << "show_int called" << endl << "Integer: " << val << endl;
}
void show(double val)
{
	cout << "show_double called" << endl << "Double: " << val << endl;
}
int main()
{
	show(420);
	show(3.1415);
	return 0;
}
