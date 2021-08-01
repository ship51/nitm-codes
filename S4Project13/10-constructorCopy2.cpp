// Copy Constructor;

#include <iostream>
using namespace std;

class code
{
		int id;
	public:
		code(){	}				// default constructor
		code(int a){id = a;}	// parameterised constructor
		code(code &x)			// copy constructor
		{
			id = x.id;
		}
		void display(void)
		{
			cout << id;
		}
};

int main()
{
	code A(100);				// object A is created and initialized
	code B(A);					// copy constructor called
	code C = A;					// copy constructor called again

	code D;						// object D is created, not initialized
	D = A;						// this is not calling copy constructor; operator overloading

	cout << "\n id of A: "; A.display();
	cout << "\n id of B: "; B.display();
	cout << "\n id of C: "; C.display();
	cout << "\n id of D: "; D.display();

	return 0;
}
