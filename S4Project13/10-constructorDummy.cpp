// Dummy Constructor;

#include <iostream> 
using namespace std; 

class Numbers
{
	private:
		int x;
	public:
		void show_data()
		{
			cout << "\n x = " << x;
		}
};

main()
{
	Numbers N;		// Dummy constructor is called
	N.show_data();
}
