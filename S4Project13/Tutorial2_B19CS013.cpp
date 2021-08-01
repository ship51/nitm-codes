//Write a C++ program to find mean of two numbers belonging to two different classes using friend function.


#include <iostream>
using namespace std;

class Simple;               // forward declaration;
class Sample {              //Class #1

    int x;
public:
    void getData()
    {
        cout<<"\nEnter a number: ";
        cin>>x;
    }
    void showData()
    {
        cout<<"\nNumber entered: "<<x;
    }
    friend float average(Sample, Simple);

};

class Simple{                   //Class #2
    int y;
public:
    void getData()
    {
        cout<<"\nEnter a number: ";
        cin>>y;
    }
    void showData()
    {
        cout<<"\nNumber entered: "<<y;
    }
    friend float average(Sample, Simple);
};

float average (Sample ob1, Simple ob2)      //friend function to classes Sample and Simple
{
    return (float)(ob1.x+ob2.y)/2;
}

int main()
{
    Sample sam;             //creating object of type Sample
    sam.getData();          //calling member function for getting data
    Simple sim;             //creating object of type Simple
    sim.getData();          //calling member function for getting data

    sam.showData();
    sim.showData();
    cout<<"\nMean = "<<average(sam, sim);  //calling friend function and passing two objects as parameters
    return 0;
}
