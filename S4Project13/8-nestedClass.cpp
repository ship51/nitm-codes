// Nested Class
#include <iostream> 
using namespace std; 

class A
{
	public:
		class B
		{
			private:
				int num;
			public:
				void large(int x, int y)
				{
					num = x;
					if(num < y)
						num = y;
				}
				void show_data()
				{
					cout << "\n Large = " << num;
				}
		};
};

main()
{
	// While declaring an object of inner class, the name of the inner class
	// must be preceded with the name of the outer class
	
	A::B b;
	b.large(100, 200);
	b.show_data();
}
