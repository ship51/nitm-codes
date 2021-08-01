// Anonymous Objects
#include <iostream>
#include <string.h>
using namespace std; 

class Number
{
	private:
		int x;
	public:
		Number()
		{	x = 0;	}
		Number (int n)
		{	x = n;	}
		int return_data()
		{	return x;	}
	friend Number add(Number &, Number &);
};

Number add(Number &N1, Number &N2)
{	return Number(N1.x + N2.x);		}

main()
{
	Number N1(2);
	Number N2(5);
	cout << "\n x = " << add(N1, N2).return_data();
}
