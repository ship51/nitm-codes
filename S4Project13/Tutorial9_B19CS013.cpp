//Tutorial 9
//Write a program that has a class 'Distance' with members - kms and meters.
//Derive classes 'School' and 'Office' which store the distance from your house to
//school and office along with other details.


#include <iostream>

using namespace std;

class Distance {                      //Class definition

    int kms;                        //private data members
    int meters;

public:

    Distance(int d)                    //parameterized constructor
    {
        kms = d/1000;
        meters = d%1000;
    }
    void showDistance()
    {
        cout<<"\n Distance from home : "<<kms<<" km "<<meters<<" m";
    }
};

class School : public Distance
{
    string school_name;                             //private members
    string school_address;
public:
    School(string n, string a, int d) : Distance(d)   //parameterized constructor
    {
        school_name = n;
        school_address = a;
    }

    void showSchoolDetails()                            //member function
    {
        cout<<"\n School Details: \n\n School Name: "<<school_name
            <<"\n School Address: "<<school_address;
        showDistance();
    }
};


class Office : public Distance
{
    string office_name;                                 //private members
    string office_address;
public:
    Office(string n, string a, int d) : Distance(d)         //parameterized constructor
    {
        office_name = n;
        office_address = a;
    }

    void showOfficeDetails()                            //member function
    {
        cout<<"\n Office Details: \n\n Office Name: "<<office_name
            <<"\n Office Address: "<<office_address;
        showDistance();
    }
};



int main()
{

    string school_name, school_address, office_name, office_address;
    int d;

    fflush(stdin);
    cout<<" SCHOOL: \n";
    cout<<" Enter School Name: ";
    getline(cin, school_name);
    cout<<" Enter School Address: ";
    getline(cin, school_address);
    cout<<" Enter distance from school (in meters): ";
    cin>>d;

    School s(school_name, school_address, d);           //object of class School


    fflush(stdin);
    cout<<"\n\n OFFICE: \n";
    cout<<" Enter Office Name: ";
    getline(cin, office_name);
    cout<<" Enter Office Address: ";
    getline(cin, office_address);
    cout<<" Enter distance from office (in meters): ";
    cin>>d;

    Office office1(office_name, office_address, d);           //object of class Office


    cout<<"\n";
    s.showSchoolDetails();                    //public member function of class School
    cout<<"\n";
    office1.showOfficeDetails();             //public member function of class Office

    return 0;
}

