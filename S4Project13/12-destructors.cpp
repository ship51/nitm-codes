// Destructors;

#include <iostream>
using namespace std;

int count = 0;

class alpha
{
	public:
		alpha()
		{
			count++;
			cout << "\n Object created: No. " << count;
		}
		
		~alpha()
		{
			cout << "\n Object destroyed: No. " << count;
			count--;
		}
};

int main()
{
	cout << "\n\nENTER MAIN\n";
	
	alpha A1, A2, A3, A4;
	
	{
		cout << "\n\nENTER BLOCK 1\n";
		alpha A5;
	}
	
	{
		cout << "\n\nENTER BLOCK 2\n";
		alpha A6;
	}
	cout << "\n\nRE-ENTER MAIN \n";
	
	return 0;
}

// When the closing brace of a scope is encountered,
// the destructors for each object in the scope are called
