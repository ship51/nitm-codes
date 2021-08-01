#include <iostream>
using namespace std;

#define MAX 10

class student
{
        char  name[30];
        char dept[30];
        float marks;
    public:
        void getDetails(void);
        void putDetails(void);
};

void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout<<"enter the Department: ";
    cin>>dept;
    cout << "Enter marks : ";
    cin >>marks;

}


void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name  "<< name << "\nDepartment " << dept<< "\nMarks"<< marks ;
}

int main()
{
    student std[MAX];
    int n,i;

    cout << "Enter total number of students: ";
    cin >> n;

    for(i=0;i< n;i++){
        cout << "Enter details of student " << i+1 << ":\n";
        cout<<"\n";
        std[i].getDetails();
    }

    cout << endl;

    for(i=0;i< n;i++){

        cout << "Details of student   " << (i+1) << "  : \n";
        cout<<"\n";
        std[i].putDetails();
    }

    return 0;
}
