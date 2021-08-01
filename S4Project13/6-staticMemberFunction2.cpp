// Static Member Functions
#include <iostream> 
using namespace std; 

class ID_Generator
{
		static int next_id;
	public:
		static int GenNextID()
		{
			cout << "\n Next ID = " << next_id++;
		}
};

int ID_Generator :: next_id = 5;

main()
{
	for (int i=0; i<5; i++)
		ID_Generator :: GenNextID();
}
