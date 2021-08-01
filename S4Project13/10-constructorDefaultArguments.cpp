// Constructor with default arguments;

#include <iostream>
using namespace std;

class Student
{
	private:
		int roll_no;
		int marks;
	public:
		Student()
		{
			roll_no = 0;
			marks = 0;
		}
		Student(int r, int m=6)
		{
			roll_no = r;
			marks = m;
		}
		void show_data()
		{
			cout << "\n Roll No. = " << roll_no;
			cout << "\t Marks = " << marks;
		}
};

main()
{
	Student S1;				// default constructor called
	S1.show_data();

	Student S2(3);
	S2.show_data();

	Student S3(05, 98);
	S3.show_data();
}
