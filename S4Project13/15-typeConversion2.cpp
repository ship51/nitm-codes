// Type Conversion - Class to Basic
#include <iostream> 
using namespace std; 

class time
{
		int hrs, mins;
	public:
		time(int a, int b)
		{
			hrs = a;
			mins = b;
		}
		operator int(); 
};

time :: operator int()
{
	return(hrs*60 + mins);
}

int main()
{
	int duration;
	time t(2,30);
	//duration = t;
	duration = t.operator int();
	cout << duration;
	
	return 0;
}


// The conversion function should satisfy the following conditions:
// 1. It must be a class member.
// 2. It must not specify the return value even though it returns the value.
// 3. It must not have any argument.
