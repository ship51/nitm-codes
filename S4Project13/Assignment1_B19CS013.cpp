// Write a C++ program that lets the user perform arithmetic operations on two numbers.
// Your program must be menu driven, allowing the user to select the operation (+, -, *, or /) and input the numbers.
// Furthermore, your program must consist of following functions:
// 1. Function showChoice: This function shows the options to the user and explains how to enter data.
// 2. Function add: This function accepts two number as arguments and returns sum.
// 3. Function subtract: This function accepts two number as arguments and returns their difference.
// 4. Function multiply: This function accepts two number as arguments and returns product.
// 5. Function divide: This function accepts two number as arguments and returns quotient.


#include <iostream>
#include <iomanip>
using namespace std;

int main(){


    void showChoice(void);
    float add(float a, float b);
    float subtract(float a, float b);
    float multiply(float a, float b);
    float divide(float a, float b);

    showChoice();
    int c;
    float a, b, r;
    cout<< "Enter your choice: ";
    cin>>c;
    if (c<5){
        cout<< "Enter two numbers: ";
        cin>>a>>b;
    }
    switch(c){

        case 1: r = add(a, b);
                cout<<"Sum "<<r;
                break;

        case 2: r = subtract(a, b);
                cout<<"Difference "<<r;
                break;

        case 3: r = multiply(a, b);
                cout<<"Product "<<fixed<<setprecision(1)<<r;
                break;

        case 4: if (b!=0) {
                    r = divide(a, b);
                    cout<<"Quotient "<<fixed<<setprecision(1)<<r;
                }
                else  cout<<"\nDivision by zero is not possible!";
                break;

        default: exit(0);
    }

    return 0;
}

void showChoice(void){
    cout<< "MENU \n";
    cout<< "1: Add \n";
    cout<< "2: Subtract \n";
    cout<< "3: Multiply \n";
    cout<< "4: Divide \n";
    cout<< "5: Exit \n";
}

float add(float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float multiply(float a, float b){
    return (a*b);
}

float divide(float a, float b){
    return (a/b);
}
