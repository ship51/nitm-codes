// Arrays of Objects
#include <iostream> 
using namespace std; 

class employee
{
		char name[30];
		float age;
	public:
		void getdata(void);
		void showdata(void);
};

void employee :: getdata(void)
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
}

void employee :: showdata(void)
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

const int size = 3;

int main() 
{ 
	employee manager[size];
	for(int i=0; i<size; i++)
	{
		cout << "Details of manager " << i+1 << endl;
		manager[i].getdata();
	}
    cout << endl;
    for(int i=0; i<size; i++)
    {
    	cout << endl;
		cout << "Manager " << i+1 << endl;
    	manager[i].showdata();
	}
    
	return 0;
}
