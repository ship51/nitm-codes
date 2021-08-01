// Overloading Class Member Access Operator ->

using namespace std;
#include <iostream>

class Date
{
	private:
		int dd, mm, yy;
	public:
		friend istream & operator >> (istream & input, Date &D)
		{
			input >> D.dd >> D.mm >> D.yy;
			return input;
		}
		friend ostream & operator << (ostream & output, Date &D)
		{
			cout << D.yy << " - " << D.mm << " - " << D.dd;
			return output;
		}
};

main()
{
	Date D;
	cout << "\n Enter the date: ";
	cin >>D;
	cout << "\n Date: ";
	cout <<D;
}
