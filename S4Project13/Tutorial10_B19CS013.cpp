// Tutorial 10 (File Reading and Writing)

// Write a C++ program that

// Creates two files
// - Writes questions in one file, and the corresponding answers in another file
// - Simultaneously reads questions and answers from those two files.


// Sample Output
// ------------------------
// Question 1 ?   Answer
// Question 2 ?   Answer
// ...

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string ques, ans;

    ofstream qout, aout ;
    qout.open("t10_questions.txt", ios::out);
    aout.open("t10_answers.txt", ios::out);

    cout<< " Enter 2 questions and their answers : \n";
    cout<< "\n Question 1: ";
    getline (cin, ques);
    qout<<ques<<"\n";

    cout<< " Answer: ";
    getline (cin, ans);
    aout<<ans<<"\n";

    cout<< "\n Question 2: ";
    getline (cin, ques);
    qout<<ques;

    cout<< " Answer: ";
    getline (cin, ans);
    aout<<ans;


    qout.close();
    aout.close();

    cout<< "\n Data stored succesfully! Now retrieving... \n";

    ifstream qin, ain;
    qin.open("t10_questions.txt", ios::in);
    ain.open("t10_answers.txt", ios::in);

    cout<< "\n The questions and their answers : \n";
    cout<< "\n Question 1: ";
    getline(qin, ques);
    cout<<ques<<"\n\n";

    cout<< " Answer: ";
    getline (ain, ans);
    cout<<ans<<"\n\n";

    cout<< "\n Question 2: ";
    getline (qin, ques);
    cout<<ques<<"\n\n";

    cout<< " Answer: ";
    getline (ain, ans);
    cout<<ans<<"\n\n";


    qin.close();
    ain.close();

    return 0;
}

