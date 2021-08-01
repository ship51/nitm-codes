//Assignment 9: Write a C++ program to compare two files.
//Sample Output:
//------------------------
//Enter the name of 1st file: fileone.cpp
//Enter the name of 2nd file: secondfile.cpp
//Files are not identical OR Files are identical

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string f1, f2;
    char ch1, ch2;
    int flag=1;

    cout<< "\n Program to compare the contents of two files \n\n";

    cout<< "\n Enter name of 1st file: ";
    cin>> f1;

    cout<< "\n Enter name of 2nd file: ";
    cin>> f2;

    ifstream fin1, fin2;

    fin1.open(f1, ios::in);
    fin2.open(f2, ios::in);


    cout<< "\n\n Comparing files if they are identical.... \n";

    while (!fin1.eof() && !fin2.eof())
    {
        fin1.get(ch1);
        fin2.get(ch2);
        if (ch1 != ch2)
        {
            flag=0;
            break;
        }
    }
    if (!fin1.eof() || !fin2.eof())
        flag=0;

    if (flag==0)
        cout<<"\n The files are NOT identical! \n";
    else
        cout<<"\n The files ARE identical! \n";


    fin1.close();
    fin2.close();

    return 0;
}

