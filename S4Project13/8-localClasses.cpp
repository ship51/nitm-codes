// Local Classes
#include <iostream> 
using namespace std; 
int NUM;
main()
{
	class Sample
	{
		private:
			int a;
		public:
			void get_data()
			{
				cout << "\n Enter the value of a: ";
				cin >> a;
				cout << "\n Enter the value of global variable: ";
				cin >> ::NUM;
			}
			void show_data()
			{
				cout << "\n Class Private Data Member = " << a;
				cout << "\n Global Variable = " << ::NUM;
			}
	};
	
	Sample s;
	s.get_data();
	s.show_data();
	//s.a = 10;
}
