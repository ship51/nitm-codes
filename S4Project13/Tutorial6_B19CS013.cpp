//Tutorial 6 (Binary Operator Overloading using Friend Function)
//Write a C++ program to add two arrays using friend function and binary operator overloading.

#include <iostream>
using namespace std;
const int n=5;                          //number of elements
class ArrayClass {                      //Class definition

    int num[n];

public:

    void const getData()
    {
        for (int i=0; i<n; i++)
            cin>>num[i];
    }
    void const showData ()
    {
        for (int i=0; i<n; i++)
            cout<<num[i]<<" ";
        cout<<"\n";
    }

    ArrayClass friend operator +(ArrayClass, ArrayClass);       //friend function declaration

};


ArrayClass operator +(ArrayClass a, ArrayClass b)           //friend function definition
{

    ArrayClass sum;
    for (int i=0; i<n; i++)
    {
        sum.num[i] = a.num[i] + b.num[i];           //adds corresponding array elements
    }
    return (sum);
}


int main()
{
    ArrayClass a, b, sum;

    cout<<"Enter values in Array A (5): ";
    a.getData();

    cout<<"\nEnter values in Array B (5): ";
    b.getData();

    sum = a + b;                                //implementing binary operator overloading
                                                //adds corresponding array elements of each object

    cout<<"\nThe sum array is : ";
    sum.showData();


    return 0;
}
