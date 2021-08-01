// Functions as a part of a structure
#include <iostream>					
using namespace std;
struct date
{
	int day;
	int month;
	int year;
	void show()
	{
		cout << day << "-" << month << "-" << year << endl;	
	}	
};
int main()
{
	date d1 = {26, 3, 1958};
	date d2 = {14, 4, 1971};
	date d3 = {1, 9, 1973};
	cout << "Date d1: ";
	d1.show();
	cout << "Date d2: ";
	d2.show();
	cout << "Date d3: ";
	d3.show();
}
