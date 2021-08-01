// Scope Resolution 1
#include <iostream>					
using namespace std;
int num = 20;
int main()
{
	int num = 10;
	cout << "Local = " << num << endl;
	cout << "Global = " << ::num << endl;
	cout << "Local + Global = " << num + ::num << endl;
}
