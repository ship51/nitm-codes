//Tutorial 8 - Single Inheritance in Protected Mode
//WAP in C++ in which class "Result" inherits class "Student" in protected mode.

#include <iostream>
using namespace std;

class Student {                      //Class definition

    string name;                    //private data members
    int rollno;

protected:
    int marks[5];

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
        cout<<"\n\nName : "<<name;
        cout<<"\n\nRoll no: "<<rollno;
    }
};


class Result: protected Student     //inheriting in protected mode
{
    float avg;                      //private data members

public:
    void getMarks()
    {
        getData();                  //member function inherited in protected mode
        cout<<"Enter marks in 5 subjects: ";
        for (int i=0; i<5; i++)
        {
            cin >> marks[i];
        }
    }
    float calcAverage();
    void showMarks()
    {
        showData();                 //member function inherited in protected mode
        cout<<"\n\nMarks : ";
        for (int i=0; i<5; i++)
        {
            cout<<"\nMark in subject "<<i+1<<": ";
            cout << marks[i]<<"  ";
        }
        cout<<"\n\nOverall marks: "<<calcAverage()<<"%";
    }
};


float Result :: calcAverage()
{
    float sum=0;
    for (int i=0; i<5; i++)
    {
        sum += marks[i];
    }
    avg = sum/5;
    return avg;
}

int main()
{
    Result ob;                  //object of class Result

    ob.getMarks();              //public member function of class Result

    ob.showMarks();             //public member function of class Result
    return 0;
}
