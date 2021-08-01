//Assignment 8
//Write a C++ program that extends the class 'Result' so that the final result of the
//Student is evaluated based on the marks obtained in tests, activities, and sports.


#include <iostream>
#include <string.h>
using namespace std;

class Test
{
	protected:
		int marks[3];
	public:
		Test(int m1, int m2)
		{
			marks[0] = m1;
			marks[1] = m2;
		}

		int total()
		{
			return (marks[0] + marks[1]);
		}
};

class Activity
{
    string act[2];
    char grade[2];
public:
    // Activity(string a1, string a2, char g1, char g2)
    // {
    //     act[0] = a1;
    //     act[1] = a2;
    //     grade[0] = g1;
    //     grade[1] = g2;
    // }

    Activity()
    {
     	getActivity();
    }
    void getActivity()
    {
    	cout<<"\n Enter 2 Activities with Grade obtained: ";
    	cout<<"\n Activity 1: ";
    	cin>>act[0];
    	cout<<" Grade for Activity 1 (A/B/C): ";
    	cin>>grade[0];
    	cout<<"\n Activity 2: ";
    	cin>>act[1];
    	cout<<" Grade for Activity 2 (A/B/C): ";
    	cin>>grade[1];
    }


    char ActivityGrade()
    {
        if (grade[0]=='A' && grade[1]=='A' || grade[0]=='B' && grade[1]=='A' || grade[0]=='A' && grade[1]=='B')
            return 'A';
        else if (grade[0]=='B' && grade[1]=='B' || grade[0]=='B' && grade[1]=='C' || grade[0]=='C' && grade[1]=='B')
            return 'B';
        else
            return 'C';
    }

    void showActivity()
    {
        cout<<"\n\n Activity 1: "<<act[0]<<" \tGrade: "<<grade[0];
        cout<<"\n Activity 2: "<<act[1]<<" \tGrade: "<<grade[1];
    }
};

class Sport
{
    string sport[2];
    char grade[2];
public:
    Sport()
    {
     	getSport();
    }

    void getSport()
    {
    	cout<<"\n Enter 2 Sports with Grade obtained: ";
    	cout<<"\n Sport 1: ";
    	cin>>sport[0];
    	cout<<" Grade for Sport 1 (A/B/C): ";
    	cin>>grade[0];
    	cout<<"\n Sport 2: ";
    	cin>>sport[1];
    	cout<<" Grade for Sport 2 (A/B/C): ";
    	cin>>grade[1];
    }

    char SportGrade()
    {
        if (grade[0]=='A' && grade[1]=='A' || grade[0]=='B' && grade[1]=='A' || grade[0]=='A' && grade[1]=='B')
            return 'A';
        else if (grade[0]=='B' && grade[1]=='B' || grade[0]=='B' && grade[1]=='C' || grade[0]=='C' && grade[1]=='B')
            return 'B';
        else
            return 'C';
    }

    void showSport()
    {
        cout<<"\n\n Sport 1: "<<sport[0]<<" \tGrade: "<<grade[0];
        cout<<"\n Sport 2: "<<sport[1]<<" \tGrade: "<<grade[1];
    }
};

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
		}

		int get_rno()
		{	return roll_no;	}
		char * get_name()
		{	return name;	}
		char * get_course()
		{	return course;	}
};


class Result : public Student, public Test, public Activity, public Sport
{
	public:
		Result(int r, char *n, char *c, int m1, int m2) : Student(r, n, c), Test(m1, m2), Activity(), Sport()
		{

		}

		void display()
		{
			cout << "\n Roll Number: " << get_rno();
			cout << "\n Name: " << get_name();
			cout << "\n Course: " << get_course();
			cout << "\n Total Marks (out of 30): " << total();
			showActivity();
			cout<<"\n Final Grade in Activities: "<< ActivityGrade();
			showSport();
			cout<<"\n Final Grade in Sports: "<< SportGrade();
		}
};

main()
{
	int roll, m1, m2;
	char n[20], c[10];

	cout<< " Personal Details:";
	cout << "\n Enter roll number: ";
	cin >> roll;

	cout << " Enter name: ";
	cin.ignore();
	cin.getline(n, 20);

	cout << " Enter course: ";
	cin.getline(c, 10);

	cout << "\n Enter marks in two Class Tests (out of 15): ";
	cin >> m1 >> m2;

	Result R(roll, n, c, m1, m2);
	cout<<("\n\n FINAL RESULT:");
	R.display();
}
