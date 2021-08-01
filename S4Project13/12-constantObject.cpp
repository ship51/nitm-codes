// Constant Object
#include <iostream>
#include <string.h>
using namespace std;

class Quotation
{
	private:
		char *quote;
		char *author;
	public:
		Quotation()
		{
			quote = "dummy";
			author = "dummy";
		}
		Quotation(char *q, char *a)
		{
			quote = new char[strlen(q) + 1];
			strcpy(quote, q);
			author = new char[strlen(a) + 1];
			strcpy(author, a);
		}
		void show_details() const
		{
			cout << "\n" << quote << " - " << author;
		}
		void get_details()
		{
			cout << "\n" << quote << " - " << author;
		}
};

main()
{
	Quotation const QT("This is quote", "I am Author");  			// class_name const object_name(parameter);
	QT.show_details();
	//QT.get_details();
	Quotation Q;
	Q.show_details();
}
