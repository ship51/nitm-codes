// Dynamic Constructor;

#include <iostream> 
using namespace std; 

class Array
{
	private:
		int *arr;
		int n;
	public:
		Array()
		{	n = 0;	}
		Array(int);
		void show_data();
};

Array :: Array(int num)
{
	n = num;
	arr = new int [n];			// Memory allocated for array dynamically
	cout << "\n Enter the elements : ";
	for(int i=0; i<n; i++)
		cin >> arr[i];
}

void Array :: show_data()
{
	for(int i=0; i<n; i++)
		cout << " " << arr[i];
}

main()
{
	int size;
	cout << "\n Enter the size of the array : ";
	cin >> size;
	Array Arr(size);			// Call constructor and allocates memory
	Arr.show_data();
}
