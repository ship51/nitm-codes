// Virtual Functions - 3

#include<iostream> 
using namespace std; 
  
class Base
{
	public:
		virtual void show()
		{	cout << "\n Base :: show()";		}
		virtual void print()
		{	cout << "\n Base :: print()";		}
};

class Derived : public Base
{
	public:
		void show()
		{	cout << "\n Derived :: show()";		}
		//void print()
		//{	cout << "\n Derived :: print()";		}
};

main()
{
	Base *b = new Derived();
	b->show();
	b->print();
}
