//Lab Test

//2. Write a program that reads a file and copies its contents in another file. While copying, replace all full stops with commas.


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;

    cout<< "\n Program to copy contents from a file to another (Full stops are replaced with commas)\n";

    ifstream fin;
    fin.open("source.txt", ios::in);

    ofstream fout;
    fout.open("destination.txt", ios::out);


    cout<< "\n Reading file and copying contents.... \n";

    fin.seekg(0);
    while (!fin.eof())
    {
        fin.get(ch);
        if (ch=='.')
            fout.put(',');
        else
            fout.put(ch);
    }

    cout<< "\n Copying complete!! \n";

    fin.close();
    fout.close();

    return 0;
}
