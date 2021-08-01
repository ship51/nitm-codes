// Create a class called time that has separate int member data for hours, minutes, and
// seconds. One constructor should initialize this data to 0, and another should initialize it
// to fixed values. Another member function should display it, in 11:59:59 format. The final
// member function should add two objects of type time passed as arguments.

// A main() program should create two initialized time objects (should they be const?) and
// one that isn’t initialized. Then it should add the two initialized values together, leaving the
// result in the third time variable. Finally it should display the value of this third variable.
// Make appropriate member functions const.


#include <iostream>
using namespace std;

class Time{

    //data members
    int hours, minutes, seconds;

public:

    Time()              //default constructor
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }


    Time(int h, int m, int s)       //parameterized constructor
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    const void addTime(Time t1, Time t2)
    {


        //seconds stores the (sum of seconds - 60) if the sum>60
        seconds = (t1.seconds + t2.seconds)%60;

        //minutes stores the (sum of minutes - 60) if the sum>60 and
        //the number of minutes from the sum of seconds
        minutes = (t1.minutes + t2.minutes)%60 + (t1.seconds+t2.seconds)/60;

        //hours stores the (sum of hours) and
        //the number of hours from the sum of minutes
        hours = (t1.hours + t2.hours) + (t1.minutes + t2.minutes)/60;
    }

    const void printTime ()
    {
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }
};


int main()
{
    const Time t1 (11,12,45);       //declaring const object of type Time
    const Time t2 (12,9,15);        //declaring const object of type Time
    Time t3;

    t3.addTime(t1, t2);             //calling member function to add time and store in object t3
    cout<<"Sum : ";
    t3.printTime();

    return 0;
}
