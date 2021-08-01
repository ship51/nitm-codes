// Multilevel inheritance: with Constructor and Destructor
#include <iostream> 
#include <string.h>
using namespace std;

class Student
{
	protected:
		int roll_no;
		char name[20];
		char course[10];
	public:
		Student(int r, char *n, char *c)
		{
			roll_no = r;
			strcpy(name, n);
			strcpy(course, c);
			cout << "\n In Student constructor - Base Class";
		}
		~Student()
		{	cout << "\n In Student destructor - Base Class";		}
		
		// Comment out when Student constructor is in use
//		void get_data()
//		{
//			cout << "\n Enter roll number: ";
//			cin >> roll_no;
//			cout << "\n Enter name: ";
//			cin.ignore();
//			cin.getline(name, 20);
//			cout << "\n Enter course: ";
//			cin.getline(course, 10);
//		}
		
		int get_rno()
		{	return roll_no;	}
		char * get_name()
		{	return name;	}
		char * get_course()
		{	return course;	}
};

class Marks : public Student
{
	protected:
		int marks[3];
	public:
		Marks(int r, char *n, char *c, int m1, int m2, int m3) : Student(r, n, c)
		{
			marks[0] = m1;
			marks[1] = m2;
			marks[2] = m3;
			cout << "\n In Marks constructor - Intermediate Class";
		}
		~Marks()
		{
			cout << "\n In Marks destructor - Intermediate Class";
		}
		
		// Comment out when Marks constructor is in use
//		void get_marks()
//		{
//			cout << "\n Enter marks in three subjects: ";
//			cin >> marks[0] >> marks[1] >> marks[2];
//		}
		
		int total()
		{
			return (marks[0] + marks[1] + marks[2]);
		}
};

class Result : public Marks
{
	public:
		Result(int r, char *n, char *c, int m1, int m2, int m3) : Marks(r, n, c, m1, m2, m3)
		{	cout << "\n In Result constructor - Derived Class";		}
		~Result()
		{	cout << "\n In Result destructor - Derived Class";		}
		
		void display()
		{
			cout << "\n ROLL NUMBER: " << get_rno();
			cout << "\n NAME: " << get_name();
			cout << "\n COURSE: " << get_course();
			cout << "\n TOTAL MARKS: " << total();
		}
};

main()
{
	// Comment when constructors are in use
//	Result R;
//	R.get_data();
//	R.get_marks();
//	R.display();
	
	int rno, m1, m2, m3;
	char n[20], c[10];
	cout << "\n Enter roll number: ";
	cin >> rno;
	cout << "\n Enter name: ";
	cin.ignore();
	cin.getline(n, 20);
	cout << "\n Enter course: ";
	cin.getline(c, 10);
	cout << "\n Enter marks in three subjects: ";
	cin >> m1 >> m2 >> m3;
	Result R(rno, n, c, m1, m2, m3);
	R.display();
}
