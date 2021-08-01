// Hierarchical inheritance
#include <iostream> 
#include <string.h>
using namespace std;

class Student
{
	protected:
		int roll_no;
		char name[20];
	public:
		Student(int r, char *n)
		{
			roll_no = r;
			strcpy(name, n);
			cout << "\n In Student constructor - Base Class";
		}
		~Student()
		{	cout << "\n In Student destructor - Base Class";		}
};

class Academic : public Student
{
	protected:
		int marks;
		char grade;
	public:
		Academic(int rno, char *n, int m, char g) : Student(rno, n)
		{
			marks = m;
			grade = g;
			cout << "\n In Academic Constructor";
		}
		~Academic()
		{	cout << "\n In Academic Destructor";		}
		void show_Acad_Details()
		{
			cout << "\n ROLL NUMBER: " << roll_no;
			cout << "\n NAME: " << name;
			cout << "\n MARKS: " << marks;
			cout << "\n GRADE: " << grade;
		}
};

class Accounts : public Student
{
	protected:
		float fees;
		char dues;
	public:
		Accounts(int rno, char *n, float f, char d) : Student(rno, n)
		{
			fees = f;
			dues = d;
			cout << "\n In Accounts Constructor";
		}
		~Accounts()
		{	cout << "\n In Accounts Destructor";		}
		void show_Accounts_Details()
		{
			cout << "\n ROLL NUMBER: " << roll_no;
			cout << "\n NAME: " << name;
			cout << "\n FEES: " << fees;
			cout << "\n DUES: " << dues;
		}
};

main()
{
	int rno, m;
	char n[20], g, d;
	float f;
	cout << "\n Enter the roll number: ";
	cin >> rno;
	cout << "\n Enter the name: ";
	cin.ignore();
	cin.getline(n, 20);
	cout << "\n Enter the fees: ";
	cin >> f;
	cout << "\n Is there any dues left (Y/N): ";
	cin >> d;
	Accounts AD(rno, n, f, d);
	AD.show_Accounts_Details();
	cout << "\n\n Enter the marks: ";
	cin >> m;
	cout << "\n Enter the grade: ";
	cin >> g;
	Academic AcD(rno, n, m, g);
	AcD.show_Acad_Details();
}

// The constructor of the base class will be invoked multiple times
