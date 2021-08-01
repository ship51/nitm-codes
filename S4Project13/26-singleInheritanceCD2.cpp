// Single inheritance: Constructors and Destructors with arguments
#include <iostream>
#include <string.h> 
using namespace std;

class Student
{
	private:
		int roll_no;
	protected:
		char course[10];
	public:
		Student(int rno, char *c)
		{
			cout << "\n In Student's Constructor";
			roll_no = rno;
			strcpy(course, c);
		}
		~Student()
		{
			cout << "\n In Student's Destructor";
		}
		void show_rno()
		{
			cout << "\n Roll No.: " << roll_no;
		}
};

class Result : protected Student
{
	private:
		int marks[3];
	public:
		Result(int rno, char *c, int m1, int m2, int m3) : Student(rno, c)
		{
			cout << "\n In Result's Constructor";
			marks[0] = m1;
			marks[1] = m2;
			marks[2] = m3;
		}
		~Result()
		{
			cout << "\n In Result's Destructor";
		}
		int total();
		void display()
		{
			show_rno();
			cout << "\n COURSE: " << course;
			cout << "\n TOTAL MARKS: " << total();
		}
};

int Result :: total()
{
	int tot_marks = 0;
	for(int i=0; i<3; i++)
		tot_marks += marks[i];
	return tot_marks;
}
main()
{
	int rno, m1, m2, m3;
	char course[10];
	cout << "\n Enter the roll number: ";
	cin >> rno;
	cout << "\n Enter the course: ";
	cin.ignore();
	cin.getline(course, 10);
	cout << "\n Enter marks in three subjects: ";
	cin >> m1 >> m2 >> m3;
	Result R(rno, course, m1, m2, m3);
	R.display();
}
