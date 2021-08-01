// Friend Class
#include <iostream> 
using namespace std; 

class B;
class A
{
	friend class B;
	private:
		int x;
	public:
		void get_data()
		{
			cout << "\n Enter x: ";
			cin >> x;
		}
		void show_data()
		{
			cout << "\n A's x = " << x;
		}
};

class B
{
	private:
		int y;
	public:
		void get_data()
		{
			cout << "\n Enter y: ";
			cin >> y;
		}
		void show_data()
		{
			cout << "\n B's y = " << y;
		}
		void swap(A &a)
		{
			int temp = a.x;
			a.x = y;
			y = temp;
		}
};

main()
{
	A a;
	B b;
	a.get_data();
	b.get_data();
	a.show_data();
	b.show_data();
	b.swap(a);
	cout << "\n After Swapping";
	a.show_data();
	b.show_data();
}
