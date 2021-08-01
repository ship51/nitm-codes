// Functions as a part of a structure
#include <iostream>					
using namespace std;
int main()
{
	int a;
	float b = 420.5;
	
	cout << "int(10.9) = " << int(10.9) << endl;
	cout << "b = " << b << endl;
	
	a = int(b);
	cout << "a = int(b) = " << a << endl;
	
	b = float(a) + 1.5;
	cout << "b = float(a) + 1.5 = " << b << endl;
}
