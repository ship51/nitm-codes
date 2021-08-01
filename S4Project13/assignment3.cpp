// Class Name: students
// Data Members: roll_no, name, marks_1, marks_2, marks_3, total_marks,
// avg_marks.
// Two arrays of type students: CS_students and EC_students
// Take size of these two arrays according to your wish and
// write a C++ program to display the student details.


#include <iostream>
#include <string.h>
using namespace std;

class students{

    int roll_no;
    float marks_1, marks_2, marks_3, total_marks, avg_marks;
    char name[50];
public:

    void setmarks(float m1, float m2, float m3)
    {
        marks_1 = m1;
        marks_2 = m2;
        marks_3 = m3;
    }

    void setdetails(int r, char n[])
    {
        roll_no = r;
        strcpy (name, n);
    }

    void calculate()
    {
        total_marks = marks_1 + marks_2 + marks_3;
        avg_marks = total_marks /3;
    }

    students()
    {
        roll_no = 0;
        marks_1 = 0;
        marks_2 = 0;
        marks_3 = 0;
        total_marks = 0;
        avg_marks = 0;
    }

    void showdetails()
    {
        cout<<roll_no<<"\t"<<name<<"\t"<<marks_1<<"\t"<<marks_2<<"\t"<<marks_3<<"\t"<<total_marks<<"\t\t"<<avg_marks<<"\n";
    }
};


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);     
    #endif
        
    int nc, ne, i, roll;
    char name[20];
    float m1, m2, m3;

    cout<<"Enter the number of CS and EC students: ";
    cin>>nc>>ne;

    students CS_students[nc], EC_students[ne];
    cout<<"\n-------CS Students-------\n";
    for (i=0; i<nc; i++)
    {
        cout<<"Enter Roll No: "; cin>>roll;
        cout<<"Enter Name: "; cin>>name;
        cout<<"Enter Marks: ";
        cin>>m1>>m2>>m3;
        CS_students[i].setdetails(roll, name);
        CS_students[i].setmarks(m1, m2, m3);
        CS_students[i].calculate();
    }

    cout<<"\n-------EC Students-------\n";
    for (i=0; i<ne; i++)
    {
        cout<<"Enter Roll No: "; cin>>roll;
        cout<<"Enter Name: "; cin>>name;
        cout<<"Enter Marks: ";
        cin>>m1>>m2>>m3;
        EC_students[i].setdetails(roll, name);
        EC_students[i].setmarks(m1, m2, m3);
        EC_students[i].calculate();
    }

    cout<<"\nDetails: \n\nRollNo \tName \tMark1 \tMark2 \tMark3 \tTotalMarks \tAvgMarks\n";
    cout<<"\nCS Students: \n";
    for (i=0; i<nc; i++)
        CS_students[i].showdetails();

    cout<<"\nEC Students: \n";
    for (i=0; i<ne; i++)
        EC_students[i].showdetails();


    return 0;
}
