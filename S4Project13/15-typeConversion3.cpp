// Type Conversion - Class to Class
#include <iostream> 
using namespace std; 

class Time
{
		int hrs, mins;
	public:
		Time(int h, int m)
		{
			hrs = h;
			mins = m;
		}
		Time()
		{
			cout<< "\n Time's Object Created";
		}
		int getMinutes()
		{
			int tot_min = ( hrs * 60 ) + mins ;
			return tot_min;
		}
		void display()
		{
			cout<< "Hours: " << hrs << endl;
			cout<< "Minutes : " << mins << endl;
		}
};

class Minute
{
		int mins;
	public:
	    Minute()
        {
           mins = 0;
        }
		void operator=(Time T)					// operator = overloaded
		{
			mins = T.getMinutes();
		}
		void display()
		{
			cout << "Total Minutes : " << mins << "\n\n";
		}
};

int main()
{
	Time t1(2,30);
	t1.display();
	Minute m1;
	
	cout << "\nBefore conversion -" << endl;
    m1.display();
        
	m1 = t1;    // conversion from Time to Minute
	
	t1.display();
	
	cout << "\nAfter conversion -" << endl;
	m1.display();
	
	return 0;
}
