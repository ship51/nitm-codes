// No ambiguity in single inheritance
#include <iostream> 
using namespace std;

class M
{
	public:
		void display(void)
		{
			cout << "Class M\n";
		}
};

class N : public M
{
	public:
		void display(void)
		{
			cout << "Class N\n";
		}
};

int main()
{
	N n;
	n.display();					// invokes display() in N
	n.M::display();					// invokes display() in M
	n.N::display();					// invokes display() in N
	
	return 0;
}
