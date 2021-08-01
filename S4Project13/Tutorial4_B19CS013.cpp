//Write a C++ program that uses overloaded constructors and dynamically allocates memory
//to a string. Demonstrate the use of copy constructor.


#include <iostream>
#include <string.h>
using namespace std;

class Sample {                      //Class definition

    char *s;

public:
    Sample()                                    //default constructor
    {
        s = "dummy_text";
    }
    Sample (char *t)                           //parameterized constructor
    {
        s = new char[strlen(t) + 1];           //dynamic allocation for string variable
        strcpy(s, t);
    }

    Sample (Sample& ob)                         //copy constructor
    {
        s = new char[strlen(ob.s) + 1];        //dynamic allocation for string variable
        strcpy (s, ob.s);
    }

    void const showData ()
    {
        cout<<"\nValue : "<<s;
    }
};


int main()
{
    Sample ob1;                                     //default constructor called
    ob1.showData();

    Sample ob2 ("This is the new string!");          //parameterized constructor called
    ob2.showData();

    Sample ob3 (ob2);                               //copy constructor called
    ob3.showData();

    return 0;
}
