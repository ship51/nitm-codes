//Tutorial 11
//Write a program to count the number of characters and number of lines in a file.


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string line;
    char ch;
    int count_line=0, count_char=0;

    cout<< "\n Program to count number of characters and lines in a files \n";

    ifstream fin;
    fin.open("t11_sample.txt", ios::in);


    cout<< "\n Reading number of characters and lines... \n";

    while (!fin.eof())
    {
        getline(fin, line);
        count_line++;
    }

    cout<<"\n\n No of lines: "<<count_line;

    fin.seekg(0);
    while (!fin.eof())
    {
        fin.get(ch);
        if (ch!='\n')
            count_char++;
    }

    cout<<"\n\n No of characters: "<<count_char<<"\n";


    fin.close();

    return 0;
}

