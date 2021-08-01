// Single inheritance: Constructors and Destructors
#include <iostream> 
using namespace std;

class Student
{
	private:
		int roll_no;
	protected:
		char course[10];
	public:
		int free_marks;
		Student()
		{
			cout << "\n In Student's Constructor";
			roll_no = 0, course[0] = '\0';
			free_marks = 5;
		}
		~Student()
		{
			cout << "\n In Student's Destructor";
		}
		void get_rno()
		{
			cout << "\n Enter the roll number: ";
			cin >> roll_no;
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
		Result()
		{
			cout << "\n In Result's Constructor";
			marks[0] = marks[1] = marks[2] = 0;
		}
		~Result()
		{
			cout << "\n In Result's Destructor";
		}
		void get_data();
		int total();
		void display()
		{
			show_rno();
			cout << "\n COURSE: " << course;
			cout << "\n TOTAL MARKS: " << total();
		}
};

void Result :: get_data()
{
	get_rno();
	cout << "\n Enter the course: ";
	cin.ignore();
	cin.getline(course, 10);
	cout << "\n Enter marks in three subjects: ";
	for(int i=0; i<3; i++)
		cin >> marks[i];
}
int Result :: total()
{
	int tot_marks = free_marks;
//	int tot_marks = 0;
	for(int i=0; i<3; i++)
		tot_marks += marks[i];
	return tot_marks;
}
main()
{
	Result R;
	R.get_data();
	R.display();
}

// Practically, a child often uses a variable and functions of the parent class.
// Therefore, instantiating the parent class before the child class ensures that those variables
// are initialized and ready to use by the time a derived class is created.
