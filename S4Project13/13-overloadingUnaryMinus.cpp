// overloading Unary Minus
#include <iostream>
using namespace std;

class space
{
		int x;
		int y;
		int z;
	public:
		void getdata(int a, int b, int c);
		void display(void);
		void operator +();						// overload unary minus
};

void space :: getdata(int a, int b, int c)
{
	x = a; y = b; z = c;
}

void space :: display(void)
{
	cout << x << " " << y << " " << z << endl;
}

void space :: operator +()
{
	x = -x;
	y = y + 3;
	z = -z;
}

int main()
{
	space S;
	S.getdata(15, -25, 35);
	cout << "S : ";
	S.display();

	+S;											// activates operator-() function

	cout << "S : ";
	S.display();

	return 0;
}
