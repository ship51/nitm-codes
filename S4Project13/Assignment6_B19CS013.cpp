//Assignment 6 (Single Inheritance)
//Define a class "Employee". Display the personal and salary details of five employees using single inheritance.


#include <iostream>
using namespace std;

class Person
{

    string name;
    int age;
    string address;

public:
    void getPersonData()                //getting personal data
    {
        fflush(stdin);
        cout<<"\nEnter name of person: ";
        getline(cin, name);
        //cin>>name;
        cout<<"Enter address: ";
        getline(cin, address);
        cout<<"Enter age of person: ";
        cin>>age;
    }


    void showPersonData()
    {
        cout<<"\nName : "<<name;
        cout<<"\tAge : "<<age;
        cout<<"\tAddress : "<<address;
    }

};

class Employee : public Person              //publicly inheriting from class Person
{
    int basic, da, hra, gross_salary;

public:
    void getEmployeeData()
    {
        getPersonData();                    //getting personal data
        cout<<"Enter basic salary: "; cin>>basic;       //salary details
        cout<<"Enter DA: "; cin>>da;
        cout<<"Enter HRA: "; cin>>hra;
        gross_salary = basic+da+hra;
    }

    void showEmployeeData()
    {
        showPersonData();                       //showing personal details
        cout<<"\nBasic: "<<basic;
        cout<<"\tDA: "<<da;
        cout<<"\tHRA: "<<hra;
        cout<<"\tGross Salary: "<<gross_salary;
    }
};


int main()
{
    int i, n=5;
    Employee e[n];
    for (i=0; i<n; i++)
    {
        cout<<"\nPerson "<<i+1;
        e[i].getEmployeeData();             //getting Employee data
    }

    for (i=0; i<n; i++)
    {
        cout<<"\n\nPerson "<<i+1;
        e[i].showEmployeeData();            //showing Employee data
    }
    return 0;
}
