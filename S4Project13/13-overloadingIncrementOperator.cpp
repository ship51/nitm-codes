// Overloading Increment Operator
#include <iostream> 
using namespace std; 

class Index
{
	private:
		int value;
	public:
		Index()
		{
			value = 0;
		}
		int GetIndex()
		{
			return value;
		}
		void operator ++()
		{
			value = value + 3;
		}
};

int main()
{
	Index idx1, idx2;
	cout << "\nIndex1 = " << idx1.GetIndex();
	cout << "\nIndex2 = " << idx2.GetIndex();
	
	++idx1;											// equivalent to idx1.operator++()
	++idx2;
	++idx2;
	
	cout << "\nIndex1 = " << idx1.GetIndex();
	cout << "\nIndex2 = " << idx2.GetIndex();
	
	return 0; 
}
