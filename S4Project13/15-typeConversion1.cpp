// Type Conversion - Basic to Class
#include <iostream> 
using namespace std; 

class time
{
		int hrs;
		int mins;
	public:
		time(){		}
		time(int t)
		{
			hrs = t/60;
			mins = t%60;
		}
		void display(void)
		{
			cout << "hour(s) = " << hrs << endl;
			cout << "minutes = " << mins << endl;
		}
};

int main()
{
	int duration = 135;
	time T1;
	T1 = duration;		// int to class type conversion
	//time T1(duration);
	T1.display();
}
