//Write a C++ program to find the next date using unary increment operator.
//Define a class Date, create an object of it - d, take an input date from user
//n D M YYYY format, and apply unary increment operator on object d.

// Sample Output:
// Enter the day, month and year: 24 2 2021
// The next date is: 25-2-2021

#include <iostream>
using namespace std;

class Date {                      //Class definition

    int day, month, year;

public:
    void const getDate()
    {
        cin>>day>>month>>year;
    }
    void const showDate ()
    {
        cout<<day<<"-"<<month<<"-"<<year;
    }
    void operator ++()
    {
        if (day > 0 && day < 28)    //checking for day from 0 to 27
            day++;

        else if (day==31)
        {
            if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            {
                day=1;
                month=(month+1)%12;
                if (month==1)
                    year++;
            }
            else
            {
                cout<<"Invalid Date";
                exit(1);
            }
        }

        else if (day == 30)    //last day check for April, June, September, November
        {
            if (month==5 || month==6 || month==9 || month==11)
            {
                day=1; month++;
            }
            else
                day++;
        }

        else if (day == 29)    //last day check for feb
        {
            if (month == 2)
            {
                day = 1;
                month = 3;
            }
            else
                day++;
        }

        else if (day == 28)
        {
            if (month == 2) //checking for February
            {
                if ((year%400 == 0) || (year%100 != 0 || year%4 == 0)) //leap year check in case of feb
                    day = 29;
                else
                {
                    day = 1;
                    month = 3;
                }
            }
            else
                day++;
        }

    }
};


int main()
{
    Date d;
    cout<<"Enter the day, month and year: ";
    d.getDate();
    ++d;
    cout<<"The next date is: ";
    d.showDate();


    return 0;
}
