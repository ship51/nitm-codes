// Scope Resolution 2
#include <iostream>					
using namespace std;
int m = 10;
int main()
{
	int m = 20;
	{
		int m = 30;
		int k = m;
		cout << "Inner block -" << endl;
		cout << "k = " << k << endl;
		cout << "m = " << m << endl;
		cout << "::m = " << ::m << endl;
	}
	cout << endl << "Outer block -" << endl;
	cout << "m = " << m << endl;
	cout << "::m = " << ::m << endl;
}
