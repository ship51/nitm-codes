// Complex Objects
#include <iostream> 
using namespace std; 

class One
{
	private:
		int num;
	public:
		void set(int i)
		{
			num = i;
		}
		int get()
		{
			return num;
		}
};

class Two
{
	public:
		One O;
		void show()
		{
			cout << "\n Number = " << O.get();
		}
};

int main()
{
	Two T;
	T.O.set(100);				// To access a member of class One, we must use the object of class Two
	T.show();
}
