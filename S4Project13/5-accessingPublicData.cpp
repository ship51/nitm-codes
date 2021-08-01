// Accessing Public Data
#include <iostream> 
using namespace std; 

class xyz
{
		int x;
		int y;
	public:
		int z;
		void getvalue(void);
};

void xyz :: getvalue(void)
{
	x = 20;
	cout << x;
}

int main() 
{ 
	xyz p;
	p.z = 10;
	cout << "Public data accessed: z = " << p.z << endl;
	p.x= 0;
	p.getvalue();
    
	return 0;
}
