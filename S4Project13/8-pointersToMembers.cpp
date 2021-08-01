// Pointers to Members
#include <iostream> 
using namespace std; 

class M
{
		int x;
		int y;
	public:
		void set_xy(int a, int b)
		{
			x = a;
			y = b;
		}
		friend int sum(M m);
};

int sum(M m)
{
	int M ::* px = &M :: x;				// pointer to int x
	int M ::* py = &M :: y;				// pointer to int y
	M *pm = &m;							// pointer to object m of type M (class)	
	int S = m .* px + pm ->* py;		// RHS: dereferencing operators (.* and ->*)
	return S;
}

int main() 
{ 
	M n;
	void (M :: *pf)(int, int) = &M :: set_xy;		// pointer to void set_xy
	(n .* pf)(10, 20);								// function call with dereferencing operator
	cout << "SUM = " << sum(n) << endl;
	
	M *op = &n;										// pointer to object n of type M (class)
	(op ->* pf)(30, 40);							// function call with dereferencing operator
	cout << "SUM = " << sum(n) << endl;
    
	return 0;
}
