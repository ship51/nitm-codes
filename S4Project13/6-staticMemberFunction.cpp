// Static Member Functions
#include <iostream> 
using namespace std; 

class test
{
		int code;
		static int count;
	public:
		void setcode(void)
		{
			code = ++count;
		}
		void showcode(void)
		{
			cout << "Object number: " << code << endl;
		}
		static void showcount(void)
		{
			cout << "count = " << count << endl;
		}
};

int test :: count = 5;

int main() 
{ 
	test t1, t2;
    
    t1.setcode();
    t2.setcode();
    
    test :: showcount();		// accessing static function
    
    test t3;
    t3.setcode();
    
    test :: showcount();
    
    t1.showcode();
    t2.showcode();
    t3.showcode();
    
	return 0;
}

// Note that the statement -

// code = ++count;

// is executed whenever setcode() function is invoked
// and the current value of count is assigned to code.
// Since each object has its own copy of 'code', the value
// contained in code represents a unique number of its object.
