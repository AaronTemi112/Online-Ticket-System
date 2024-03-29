#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ticket
{
public:
	ticket();
	~ticket();
	void setPrice(double price);
	void printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address);
	virtual double cost() = 0;

protected:
	double totalCost;
};

ticket::ticket()
{
	totalCost = 0; //initialises the total cost
}

ticket::~ticket()
{
}

// calculates discount cost from total price
void ticket::setPrice(double price)
{
	totalCost = price;
	cout << "\nThe total price of your tickets (including any applicable discount) is" << (char)156 << this->cost() << ".\n" << endl;
	system("PAUSE");
}
//prints ticket using data from derived classes
void ticket::printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address)
{
	system("CLS");
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~YOUR TICKETS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout <<
		"=================================================================" << endl;
	cout << "================================Enjoy the show!================================" << endl;
	cout << "Show: " << showName << endl;
	cout << "Date: " << showDate << endl;
	cout << "Time: " << showTime << endl;
	cout <<
		"=====================================================================" << endl;
	cout << "Number of seats: " << numSeats << endl;
	cout << "Total cost: " << (char)156 << this->cost() << endl;
	cout << "Ticket Purchaser: " << fName << " " << sName << endl;
	cout << "Postal address: " << address << endl;
	cout <<
		"=====================================================================\n\n" << endl;
	cout <<
		"=====================================================================\n\n" << endl;
}


