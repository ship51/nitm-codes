// Static Object
#include <iostream> 
using namespace std; 

class Sample
{
	private:
		int a;
		int b;
	public:
		void show_data()
		{
			cout << "\n a = " << a << " and b = " << b;
		}
		void add()
		{
			a += 10;
			b += 20;
		}
};

main()
{
	static Sample s;
	s.show_data();
	s.add();
	s.show_data();
}
