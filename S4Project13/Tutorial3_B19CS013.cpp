//Write a C++ program to add, subtract and multiply two numbers.
//Let the add() accept the objects using call-by-value technique, subtract() using call-by-reference,
//and multiply() accept using the call-by-address technique.


#include <iostream>
using namespace std;

class Sample {                      //Class definition

    int x;
public:
    void getData()                  //member function to get a value from user
    {
        cout<<"\nEnter a number: ";
        cin>>x;
    }
    void showData()                 //member function to show the value entered
    {
        cout<<"\nNumber entered: "<<x;
    }
    friend int add(Sample, Sample);             //friend function to add
    friend int subtract(Sample &, Sample &);    //friend function to subtract
    friend int multiply(Sample*, Sample*);      //friend function to multiply
};

int add(Sample ob1, Sample ob2)             //call by value; objects are copied
{
   return (ob1.x + ob2.x);
}

int subtract(Sample &ob1, Sample &ob2)      //call by reference;
{
   return (ob1.x - ob2.x);
}

int multiply(Sample *ob1, Sample *ob2)      //call by address;
{
   return (ob1->x * ob2->x);
}


int main()
{
    Sample ob1, ob2;
    ob1.getData();                  //function call to input a number
    ob2.getData();

    ob1.showData();                 //function call to show the number entered
    ob2.showData();

    cout<<"\n\nSum = "<<add(ob1, ob2);
    cout<<"\nDifference = "<<subtract(ob1, ob2);
    cout<<"\nProduct = "<<multiply(&ob1, &ob2);
    return 0;
}
