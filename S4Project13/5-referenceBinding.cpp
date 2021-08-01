// Reference binding testing
// & --> reference operator --> can be read as "address of"
// * --> dereference operator --> can be read as "value pointed by"
#include <iostream>					
using namespace std;
int main()
{
	int n = 100;
	int *p = &n; // value pointed by 'p' = value stored in the address of 'n'
	int &m = *p; // address of 'm' will contain = value pointed by 'p'; Now, 'm' is now bound to 'n'
	cout << "n = " << n << ", m = " << m << ", *p (value pointed by 'p') = " << *p << endl;
	int k = 5;
	p = &k; // Now 'p' will contain the value stored in the address of 'k'
	k = 200;
	cout << "n = " << n << ", m = " << m << ", *p (value pointed by 'p') = " << *p << endl;
}
