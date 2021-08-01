// Default arguments to functions
#include <iostream>					
using namespace std;
void PrintLine(char='-', int = 5);		// default arguments
int main()
{
	PrintLine();
	PrintLine('!');						// ignores 1st default argument
	PrintLine('*', 10);					// ignores both default arguments
	PrintLine('R', 15);					// ignores both default arguments
}
void PrintLine(char ch, int repeat)
{
	cout << endl;
	for(int i = 0; i < repeat; i++)		// variable declaration at any time
	cout << ch;
}
