#include <iostream>
#include <string.h>
using namespace std;

class String {                      //Class definition

    char *str;

public:
    String()                                    //default constructor
    {
        str = "default";
    }
    String (char *p)                           //parameterized constructor
    {
        str = new char[strlen(p) + 1];           //dynamic allocation for string variable
        strcpy(str, p);
    }

    String (String& ob)                         //copy constructor
    {
        str = new char[strlen(ob.str) + 1];        //dynamic allocation for string variable
        strcpy (str, ob.str);
    }

    void const showData ()
    {
        cout<<"\nValue of variable: "<<str;
    }
};


int main()
{
    String s1;                                     //default constructor called
    String s2 ("Parametric string!");          //parameterized constructor called
    String s3 (s2);                               //copy constructor called

    s1.showData();
    s2.showData();
    s3.showData();

    return 0;
}
