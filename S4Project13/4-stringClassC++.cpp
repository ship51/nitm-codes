// String Class in C++  
#include <iostream> 
using namespace std; 
int main() 
{
	string str1("first string");
	string str2(str1);
	string str3(5, '#');
	string str4(str1, 6, 6); // (string, from 6th index, 6 characters)
	string str5(str2.begin(), str2.begin() + 5);
	
	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;
	cout << "str5 = " << str5 << endl;
	cout << "Length of str5 = " << str5.length() << endl;
	cout << "Third character of str5 = " << str5.at(2) << endl;
	cout << str5.append("class") << endl;
	cout << str5.replace(5,3,"-----") << endl;
	cout << str5.erase(5,7) << endl;
	
	str5 = str5 + " " + str4;
	cout << "Updated str5 = " << str5 << endl;
	if (str1 == str5)
		cout << "str1 and str5 are same" << endl;
	else
		cout << "str1 and str5 are not same" << endl;
	
	if (str5.find(str4) != string::npos)
		cout << "str4 found in str5 at " << str5.find(str4) << " pos" << endl;
	else
		cout << "str4 not found in str5" << endl;
	cout << str5.substr(2,6) << endl;
	
	return 0;   
} 
