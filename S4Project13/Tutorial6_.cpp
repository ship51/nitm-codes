#include <iostream>
using namespace std;
const int n=5;                          
class Demo {                      

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
    }

    Demo friend operator +(Demo, Demo);

};


Demo operator +(Demo a, Demo b)
{

    Demo sum;
    for (int i=0; i<n; i++)
    {
        sum.num[i] = a.num[i] + b.num[i];
    }
    return (sum);
}


int main()
{
    Demo a, b, sum;
    cout<<"Enter values in Array A : ";
    a.getData();

    cout<<"\nEnter values in Array B : ";
    b.getData();

    sum = a + b;

    cout<<"\nThe sum array is : ";
    sum.showData();


    return 0;
}
