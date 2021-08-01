// Dynamic / runtime memory allocation
// In C --> void *malloc (sizeof (DataType) *Size in Integer)
// In C++ --> Datatype *new Datatype [size in integer]
#include <iostream>					
using namespace std;
int main()
{
	int *arr;
	int size;
	cout << "Enter the size of the integer array: ";
	cin >> size;
	cout << "Creating an array of size " << size << endl;
	arr = new int[size];
	if(!arr)
		cout << "Allocation failed" << endl;
	cout << "Allocation successful" << endl;
	
	delete arr;
}
