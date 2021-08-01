// Static Data Member
#include <iostream> 
using namespace std; 

class item
{
		static int count;
		static char test;
		static int number;
	public:
		void getdata(int a)
		{
			number = a;
			count ++;
		}
		void getcount(void)
		{
			cout << "count: " << count << endl;
			if (test != NULL)
				cout << "test is not NULL; it is: " << test << endl;
			else
				cout << "test is NULL" << endl;
		}
};

int item :: count = 5;			// outside class definition; can be initialized here;
char item :: test = 'a';
int item :: number = 10;

int main() 
{ 
    item a, b, c;			// count is initialized to zero
    a.getcount();
    b.getcount();
    c.getcount();
    
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    
    cout << "After reading data" << endl;
    
    a.getcount();
    b.getcount();
    c.getcount();
    
	return 0;
}
