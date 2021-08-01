//Assignment 1

//Write a menu-driven program that reads title of a book from an user.
//Check if the book is available and display the details about the book such as author, price, and number of copies available.
//If the user wants three copies, calculate the bill. Delete the count of books wanted from available copies.
//The program must also have functions to update the number of copies available and the price of the book.


#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;


class Book
{
    string title, author;
    float price;
    int copies;
public:
    Book(string t, string a, float p, int c)
    {
        title = t;
        author = a;
        price = p;
        copies = c;
    }

    void showBookDetailsList()
    {
        cout<<setw(40)<<title<<setw(30)<<author<<setw(10)<<price<<"\t"<<copies<<"\n";
    }



    void showBookDetails()                      // displays all details
    {
        cout<<"\n----------------------BOOK Details----------------------\n";
        cout<<"Book Name     : "<<title<<"\n";
        cout<<"Book Author   : "<<author<<"\n";
        cout<<"Price         : Rs "<<price<<"\n";
        cout<<"No of copies  : "<<copies<<"\n";
        cout<<"\n--------------------------------------------------------";
    }

    int checkBook(string bname)                  // function to check name of book
    {
        if ((title == bname) && copies>0)
            return 1;
        else
            return 0;
    }


    void buyBook(string bname)                  // function to purchase book and generate invoice
    {
        cout<<"\n\n-------------------------PURCHASE-------------------------";
        cout<<"\n\nEnter number of copies you wish to purchase: ";
        int n;
        cin>>n;
        if (n > copies)
            cout<<"\n Number of copies requested unavailable. Enter a quantity below "<<copies;
        else
        {
            cout<<"\n\n------------------INVOICE------------------\n";
            cout<<"Book Name         : "<<title<<"\n";
            cout<<"Book Author       : "<<author<<"\n";
            cout<<"No of copies      : "<<n<<"\n";
            cout<<"Price of each copy: Rs "<<price<<"\n\n";
            cout<<"Total Bill: ("<<price<<"x"<<n<<") = Rs "<<price*n;
            cout<<"\n-------------------------------------------";

            copies = copies - n;
        }
    }


    void updatePrice(float newprice)                  // function to update price of book
    {
        price = newprice;
        cout<<"\n\nPRICE UPDATED SUCCESSFULLY!";
        showBookDetails();
    }


    void updateCopies(int value)                   // function to update number of copies
    {
        if (value>0)
        {
            copies += value;
            cout<<"\nUpdated. Number of copies after updation: "<<copies;
            showBookDetails();
        }
        else
            cout<<"\nValue cannot be less than 0!!";
    }
};




int main()
{

    int choice, i, n, flag=-1, purchase_choice, pos=-1, newcopies;
    int control=1;
    float newprice;
    string bookname;

    Book b0("Computer Organisation", "Carl Hamacher", 699.00, 7);
    Book b1("OOP", "Balaguruswamy", 470.00, 14);
    Book b2("Data Communications and Networking", "Forouzan, Behrouz", 799.00, 20);
    Book b3("Introduction to Algorithms - CLRS", "Thomas H. Cormen and others", 1099.00, 9);
    Book b4("Prog Languages-Principles and Practice", "Louden, Lambert", 999.00, 22);
    Book b5("Scientific Computing", "Michael T. Heath", 899.00, 4);

    Book bookArray[6] = {b0, b1, b2, b3, b4, b5};      //array of book objects
    n=6;

    cout<< "\n-----------------------------Welcome to the Book Store-----------------------------\n";

    while(control)                                      //runs until control is 0
    {
        pos = -1;

        cout<<"\n\n\n Enter a book (name is case-sensitive) to search or 0 to exit: ";
        fflush(stdin);
        getline(cin, bookname);
        if (bookname=="0")                              //if the user enters 0, exit
            exit(0);

        for (i=0; i<n; i++)
        {
            flag = bookArray[i].checkBook(bookname);
            if (flag==1)                                //book available
            {
                pos = i;
                break;
            }
        }
        if (pos==-1)
        {
            cout<<"\n Book is currently unavailable. We regret the inconvenience.";
        }


        cout<< "\n\n\n MENU: \n";
        if (pos!=-1)
        {
            cout<< " 1. Check Availability \n";
            cout<< " 2. View Details \n";
            cout<< " 3. Purchase Book \n";
            cout<< " 4. Update number of copies \n";
            cout<< " 5. Update Price \n";
        }
        cout<< " 6. Display all books\n";
        cout<< " 7. Search another book\n";
        cout<< " 8. Exit the store\n";
        cout<< "\n Enter your choice:  ";

        cin>>choice;

        switch(choice)
        {

            case 1: if (flag == 1)                  //indicates the book is present
                    {
                        cout<< "\n The book is AVAILABLE.";
                        cout<< "\n\n Select: \n";
                        cout<< "1. Show Details \n";
                        cout<< "2. Purchase Book \n";
                        cout<< "3. Exit \n";
                        cin>>purchase_choice;
                        switch(purchase_choice)
                        {

                            case 1: bookArray[pos].showBookDetails();   //display book details
                                    break;
                            case 2: bookArray[pos].buyBook(bookname);   //purchase book
                                    break;

                            default: break;
                        }
                    }

                    break;

            case 2:
                    if (flag == 1)                  //indicates the book is present
                    {
                        bookArray[pos].showBookDetails();
                        cout<< "\n\n Do you want to purchase this book : \n";
                        cout<< " 1. Purchase Book \n";
                        cout<< " 2. Exit \n";
                        cout<< " Enter your choice :  ";
                        cin>>purchase_choice;
                        switch(purchase_choice)
                        {

                            case 1: bookArray[pos].buyBook(bookname);   //purchase book
                                    break;

                            default: break;
                        }
                    }
                    break;


            case 3:
                    if (flag == 1)                  //indicates the book is present
                        bookArray[pos].buyBook(bookname);
                    break;

            case 4:
                    if (flag == 1)                  //indicates the book is present
                    {
                        bookArray[pos].showBookDetails();       //displays book details
                        cout<<"\n Enter number of copies to add: ";
                        cin>>newcopies;
                        bookArray[pos].updateCopies(newcopies); //update number of copies
                    }
                    break;

            case 5: if (flag == 1)                  //indicates the book is present
                    {
                        bookArray[pos].showBookDetails();       //display details
                        cout<<"\n Enter updated price: ";
                        cin>>newprice;
                        bookArray[pos].updatePrice(newprice);    //update price
                    }
                    break;


            case 6: cout<<"\n\n----------------------------------------STOCK DETAILS----------------------------------------\n\n";
                    cout<<setw(40)<<"Book Name"<<setw(30)<<"Author(s)"<<setw(10)<<"Price"<<"\t"<<"No of copies"<<"\n\n";
                    for (i=0; i<n; i++)
                    {
                        bookArray[i].showBookDetailsList();         //Lists all the books an their details
                    }
                    break;


            case 7: break;


            case 8: control=0;
                    cout<<"\n\n------------------------------------------------------------";
                    cout<<"\n \t\t Thank you for visiting!! ";
                    cout<<"\n------------------------------------------------------------";

                    break;

            default: cout<<"\n Wrong Input!!";
        }
    }
}

