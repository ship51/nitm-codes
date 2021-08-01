// Ambiguity Resultion in multiple inheritance
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

class N
{
	public:
		void display(void)
		{
			cout << "Class N\n";
		}
};

class P : public M, public N
{

};

int main()
{
	P p;
	//p.display();
	p.M::display();
	p.N::display();
}
