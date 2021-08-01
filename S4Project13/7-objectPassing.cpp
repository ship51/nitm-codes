// Object Passing
#include <iostream>
using namespace std;

class myClass
{
	private:
		int num;
	public:
		void get_data()
		{
			cout << "\n Enter a number: ";
			cin >> num;
		}
		void set_data(myClass o2)			// function accepts object
		{
			num = o2.num - 1;
		}
		// function accepts address of object
		void set_data(int a, myClass &o2)
		{
			num = o2.num;
		}
		void set_data(myClass *o2)			// function accepts pointer
		{
			num = o2->num + 1;
		}
		void show_data()
		{
			cout << "\n Num = " << num;
		}
};

main()
{
	myClass o1, o2, o3, o4;
	int a=0;
	o2.get_data();
	o1.set_data(o2);			// call by value
	o3.set_data(&o2);			// call by pointer
	o4.set_data(a, o2);			// call by reference
	o1.show_data();
	o2.show_data();
	o3.show_data();
	o4.show_data();
}
