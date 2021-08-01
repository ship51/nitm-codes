// Friend Function; Friendly to two classes;
#include <iostream>
using namespace std;

class ABC;						// forward declaration;
class XYZ
{
		int x;
	public:
		void setvalue(int i) {x = i;}
		friend void max(XYZ, ABC);
// compiler will not acknowledge the presence of ABC,
// unless its name is declared in the beginning
};

class ABC
{
		int a;
	public:
		void setvalue(int i) {a = i;}
		friend void max(XYZ, ABC);
};

void max(XYZ m, ABC n)	// definition of friend function
{
	if(m.x >= n.a)
		cout << m.x << endl;
	else
		cout << n.a << endl;
}

int main()
{
	ABC abc;
	abc.setvalue(10);
	XYZ xyz;
	xyz.setvalue(15);
	max(xyz, abc);		// object passing as arguments

	return 0;
}
