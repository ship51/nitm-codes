// Object Slicing
#include <iostream>
#include <cstring> 
using namespace std; 

class Base
{
	protected:
		int a;
	public:
		Base(int x)
		{	a = x;		}
		void show()
		{	cout << "\n In Base: a = " << a;		}
};

class Derived: public Base
{
	private:
		int b;
	public:
		Derived(int x, int y) : Base(x)
		{	b= y;		}
		void show()
		{	cout << "\n In Derived: a = " << a << " and b = " << b;		}
};

main()
{
	Derived D(2,3);
	Base B(5);
	
	//D = B;
	D.show();
	B = D;
	B.show();
}
