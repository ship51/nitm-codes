//Lab Test

//1. Write a program that has a class "Train" with data members to represent the seats available in different class. Derive a class "Reservation" that has data members that represents number of bookings in each class for a particular booking transaction. It also has functions to book and cancel tickets and display status. Write a code implementing ticket reservation, and display output both for successful and failed reservation attempts.


#include <iostream>
#include <iomanip>
using namespace std;

class Train
{

	protected:
	    int seats_sl, seats_ac1, seats_ac2, seats_ac3;

	public:
	    void getSeats()
	    {
	        cout<<"\n Enter no of seats in Sleeper Class: ";
	        cin>>seats_sl;
	        cout<<"\n Enter no of seats in AC Tier 1 : ";
	        cin>>seats_ac1;
	        cout<<"\n Enter no of seats in AC Tier 2 : ";
	        cin>>seats_ac2;
	        cout<<"\n Enter no of seats in AC Tier 3 : ";
	        cin>>seats_ac3;
	    }

		void showSeats()
		{
			cout << "\n Seats in Sleeper Class : "<< seats_sl;
			cout << "\n Seats in AC Tier 1 : "<< seats_ac1;
			cout << "\n Seats in AC Tier 2 : "<< seats_ac2;
			cout << "\n Seats in AC Tier 3 : "<< seats_ac3;
		}

};
static int booked_sl=0, booked_ac1=0, booked_ac2=0, booked_ac3=0;


class Reservation : public Train
{

    int ticket_type;
    int cancelled=0;
    //0 = sleeper
    //1 = AC1
    //2 = AC2
    //3 = AC3

	public:

	    void bookTicket(int choice)
	    {
	        ticket_type = choice;
	        switch(choice)
	        {
	            case 0: if (booked_sl < seats_sl)
                        {
                            cout<<"\n TICKET BOOKING SUCCESSFULL!!";
                            booked_sl++;
                        }
                        else
                            cout<<" \n NO Seat vacant in Sleeper Class!!";
                        break;

                case 1: if (booked_ac1 < seats_ac1)
                            {
                                cout<<"\n TICKET BOOKING SUCCESSFULL!!";
                                booked_ac1++;
                            }
                        else cout<<" \n NO Seat vacant in AC1 !!";
                        break;

                case 2: if (booked_ac2 < seats_ac2)
                            {
                                cout<<"\n TICKET BOOKING SUCCESSFULL!!";
                                booked_ac2++;
                            }
                        else cout<<" \n NO Seat vacant in AC2 !!";
                        break;

                case 3: if (booked_ac3 < seats_ac3)
                            {
                                cout<<"\n TICKET BOOKING SUCCESSFULL!!";
                                booked_ac3++;
                            }
                        else cout<<" \n NO Seat vacant in AC3 !!";
                        break;
                default: cout<<"\n Wrong choice!";
	        }

	    }

	    void cancelTicket(int choice)
	    {
	        switch(choice)
	        {
	            case 0: booked_sl--;
                        break;

                case 1: booked_ac1--;
                        break;

                case 2: booked_ac2--;
                        break;

                case 3: booked_ac3--;
                        break;
	        }
	        cout << "\n Ticket Cancelled !!";
	    }

	    void displayStatus()
	    {
	        cout << "\n Booked Seats in Sleeper Class : "<< booked_sl;
			cout << "\n Booked Seats in AC Tier 1 : "<< booked_ac1;
			cout << "\n Booked Seats in AC Tier 2 : "<< booked_ac2;
			cout << "\n Booked Seats in AC Tier 3 : "<< booked_ac3;
            //display vacant
			//cout << "\n\n Vacant Seats in Sleeper Class : "<< seats_sl - booked_sl;
			//cout << "\n Vacant Seats in AC Tier 1 : "<< seats_ac1 - booked_ac1;
			//cout << "\n Vacant Seats in AC Tier 2 : "<< seats_ac2 - booked_ac2;
			//cout << "\n Vacant Seats in AC Tier 3 : "<< seats_ac3 - booked_ac3;
	    }


};


int main()
{
    cout<<"\n----------------------------- Train Reservation System ----------------------------- \n";

    Train T1;
    T1.getSeats();

    Reservation R1, R2, R3;
    R1.bookTicket(0);
    R3.bookTicket(3);
    R1.displayStatus();

    R1.cancelTicket(0);
    R3.cancelTicket(3);


    return 0;


}

