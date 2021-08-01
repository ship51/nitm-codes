//Assignment 7 (Multi-Level Inheritance)
//WAP in C++ corresponding to a real-life problem of your choice using multi-level inheritance


#include <iostream>
using namespace std;

class Manufacturer
{
    private:
        float p_costprice;                  //cost price
        float p_profit=5;                   //profit margin for manufacturer

	protected:
		int p_id;                           //product ID
		char p_name[20];                    //product name

	public:

		void getProductData()
		{
		    cout << " Enter product details: ";
			cout << "\n Enter product ID: ";
			cin >> p_id;
			cout << "\n Enter product name: ";
			cin.ignore();
			cin.getline(p_name, 20);
			cout << "\n Enter product price: ";
			cin >> p_costprice;
		}

        float calcManufacturerSP()                      //selling price for manufacturer
        {
            return p_costprice*(1 + p_profit/100);       //adding profit
        }

        void showManufacturerData()
		{
			cout << "\n\n Manufacturer Data: ";
			cout << "\n Product ID: " << p_id;
			cout << "\n Product name: " << p_name;
			cout << "\n\n Product cost price: " << p_costprice;
			cout << "\n Selling Price (5% profit): "<< calcManufacturerSP();
		}

};

class Distributer : public Manufacturer
{
    private:
        float p_price;
        float p_profit=6;

	public:
	    float calcDistributerSP()              //selling price for distributer
	    {
	        p_price = calcManufacturerSP();         //selling price for manufacturer
	        return p_price*(1 + p_profit/100);      //adding profit
	    }

	    void showDistributerData()
	    {
	        cout<<"\n\n\n Distributer Data: ";
	        cout<<"\n Cost Price: "<< calcManufacturerSP();
	        cout<<"\n Selling Price (6% profit): "<< calcDistributerSP();
	    }

};

class Consumer : public Distributer
{
    private:
        float p_price;

	public:

	    float calcConsumerPrice()                   //final price for consumer
	    {
	        p_price = calcDistributerSP();          //selling price for distributer
	    }

		void showDetails()
		{
		    showManufacturerData();
		    showDistributerData();
            cout<<"\n\n Price paid by the Consumer: "<<calcConsumerPrice();
		}

};

main()
{
	Consumer C;
	C.getProductData();
	C.showDetails();
}
