// Friend Function
#include <iostream> 
using namespace std; 

class sample
{
		int a;
		int b;
	public:
		void setvalue()
		{
			a=40;
			b=50;
		}
		friend float mean(sample s);		// function declaration preceded by keyword 'friend'
};

float mean(sample s)						// no 'friend' keyword; no scope operator
{
	return float(s.a + s.b)/2.0;			// uses class variable by using dot operator
}											// and the objects passed to it as arguments

int main() 
{ 
	sample X;		// Object X
	X.setvalue();
	cout << "Mean value = " << mean(X) << endl;		// friend function cannot be called using
    												// the object of that class
	return 0;
}
