//Tutorial 7 - Single Inheritance
//Write a program in which class "Result" inherits class "Student" in private mode.

#include <iostream>
using namespace std;

class Student {                      //Class definition

    string name;                    //private data members
    int rollno;

public:

    void getData()
    {
        cout<<"Enter name of student: ";
        getline(cin, name);
        cout<<"Enter roll no: ";
        cin>>rollno;
    }
    void showData()
    {
        cout<<"\nName : "<<name;
        cout<<"\nRoll no: "<<rollno;
    }
};


class Result: private Student{

    int s1, s2, s3;                    //private data members

public:
    void getMarks()
    {
        getData();                  //privately inherited member function
        cout<<"Enter marks in 3 subjects: ";
        cin>>s1>>s2>>s3;
    }

    void showMarks()
    {
        showData();                 //privately inherited member function
        cout<<"\nMarks in 3 subjects: "<<s1<<" "<<s2<<" "<<s3<<"\n";
        cout<<"\nOverall marks: "<<(s1+s2+s3)/3<<"%";
    }
};


int main()
{
    Result ob;                  //object of class Result

    ob.getMarks();              //public member function of class Result

    ob.showMarks();             //public member function of class Result
    return 0;
}
