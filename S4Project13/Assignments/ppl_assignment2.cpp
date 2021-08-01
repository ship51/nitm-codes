//Assignment 2 -PPL



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = -8;
    int q = (n+3)/4;

    switch(n%4)
    {
    case 0:
        do{
            n++;
            cout<< "\n case 0: n = "<<n;
            case 3: n++;
                    cout<< "\n case 3: n = "<<n;
            case 2: n++;
                    cout<< "\n case 2: n = "<<n;
            case 1: n++;
                    cout<< "\n case 1: n = "<<n;
        }while(--q>0);
    }

    cout<< "\n n = "<<n;
    cout<< "\n n %4= "<<n%4;
    return 1;
}

