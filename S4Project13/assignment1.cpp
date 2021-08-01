

#include <iostream>
using namespace std;

int main(){

    void showChoice(void);
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);

    showChoice();
    int a, b, c, result;
    cout<< "Enter your choice: ";
    cin>>c;
    if (c<5){
        cout<< "Enter two numbers: ";
        cin>>a>>b;
    }
    switch(c){

        case 1: result = add(a, b);
                cout<<"Sum "<<result;
                break;
        
        case 2: result = subtract(a, b);
                cout<<"Difference "<<result;
                break;
        
        case 3: result = multiply(a, b);
                cout<<"Product "<<result;
                break;
        
        case 4: if (b!=0) {
                    result = divide(a, b);
                    cout<<"Quotient "<<result;
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

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}
