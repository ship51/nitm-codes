// Multilevel inheritance
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
		void get_data()
		{
			cout << "\n Enter roll number: ";
			cin >> roll_no;
			cout << "\n Enter name: ";
			cin.ignore();
			cin.getline(name, 20);
			cout << "\n Enter course: ";
			cin.getline(course, 10);
		}
		
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
		void get_marks()
		{
			cout << "\n Enter marks in three subjects: ";
			cin >> marks[0] >> marks[1] >> marks[2];
		}
		
		int total()
		{
			return (marks[0] + marks[1] + marks[2]);
		}
};

class Result : public Marks
{
	public:	
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
	Result R;
	R.get_data();
	R.get_marks();
	R.display();
}
