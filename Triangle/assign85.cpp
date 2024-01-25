#include "customer.h"
#include "Show.h"
#include "ShowSeat.h"
#include "Ticket.h"

int main()
{
	string a,
		b,
		c,
		f,
		g,
		h;
	int d = 0;

	double e = 0;

	char ch = 0, 

		terminator;

	showSeat SEAT;
	show SHOW;
	ticket * TICK;
	customer CUST;

	for (int counter = 1; counter <= 6; ++counter)
	{
		CUST.getLogin();
		CUST.getProfileInfo(f, g, h);
		CUST.getPaymentInfo();


		system("CLS");

		cout << "\n~~~~~~~~~~~~~~~~~~~~~~ MAIN MENU ~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

		cout << "1. Buy tickets for upcoming shows" << endl;
		cout << "2. Log out\n" << endl;
		cout << "Please enter a menu choice number: ";
		cin.get(ch);

		while (ch != '1' && ch != '2')
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Please select a valid menu choice number: ";
			cin.get(ch);
		}

		if (ch == '1')

		{
			SHOW.selectShow(a, b);
			SHOW.selectTime(a, b, c);

			do
			{
				cout << "\nAre you happy with your choice?";
				cin.get(ch);
			} while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
			cin.get(terminator);


		}

		if (ch == '2')
		{
			return EXIT_SUCCESS;
		}

		while (ch == 'N' || ch == 'n');
		
		SEAT.initialiseFloorPlan();
		d = SEAT.getNumSeats();
		e = SEAT.getSeatSelection();
	}

	ticket *setPrice();
	ticket *printTicket();

		//CUST.initialise();
		//CUST.display_area();
	}

