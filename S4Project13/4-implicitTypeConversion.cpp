// Implicit Type Conversion  
#include <iostream> 
using namespace std; 
int main() 
{ 
    int x = 10; 		// integer x 
    char y = 'a'; 		// character c 
  
    x = x + y;			 
  
    float z = x + 1.5; 	
  
    cout << "x = " << x << endl 
         << "y = " << y << endl 
         << "z = " << z << endl; 
  
    return 0; 
} 
