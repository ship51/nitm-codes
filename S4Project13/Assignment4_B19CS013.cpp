//Write a program to compare two numbers of a class. Use friend function, pointer to data members,
//pointer to member function, and pointer to the object.


#include <iostream>
using namespace std;

class Sample{

    int x, y;

public:

    void getData()
    {
        cout<<"Enter 1st number: "; cin>>x;
        cout<<"Enter 2nd number: "; cin>>y;
    }
    void showData()
    {
        cout<<"\nx = "<<x<<"\n";
        cout<<"y = "<<y<<"\n";
    }
    int friend compare(Sample);                 //friend function declaration
};

int compare(Sample ob)                          //friend function definition
{
    int Sample::* p1 = &Sample::x;              //pointer to data member
    int Sample::* p2 = &Sample::y;              //pointer to data member
    Sample *pob = &ob;                          //pointer to object

    if (pob->*p1 == pob->*p2)                   //if the numbers are equal
    {
        cout<<"The numbers are equal";
        exit(1);
    }
    int l = (pob->*p1 > pob->*p2)? pob->*p1 : pob->*p2;        //l stores the max among the two
    return l;

}

int main()
{
    Sample s;
    void (Sample:: *pfun)(void) = &Sample::getData;     //pointer to member function
    (s .* pfun)();                                      //function call with dereferencing operator

    s.showData();

    cout<<"\nComparison: "<<compare(s)<<" is greater.";
    return 0;
}
