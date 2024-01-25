#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class showSeat
{
public:
	showSeat();
	~showSeat();
	void initialiseFloorPlan();
	int getNumSeats();
	double getSeatSelection();

private:
	void displayFloorPlan(int r, int c);
	void calculatePrice(double& price);

protected:
	char floorPlan[7][6];
	int numSeats;
	int rNum; //calculates price
	double price;
};

showSeat::showSeat()
{
	for (int r = 0; r < 7; r++)
		for (int c = 0; c < 6; c++)
			floorPlan[r][c] = '0'; //allocates memory slots for floor plan array

	numSeats = 0;
	rNum = 0;
	price = 0;
}

showSeat::~showSeat()
{

}

void showSeat::initialiseFloorPlan()
{

	for (int r = 0; r < 7; r++) //prepares the rows
		for (int c = 0; c < 6; c++) //prepares columns
			floorPlan[r][c] = 'A';
}


int showSeat::getNumSeats()
{
	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~SELECT SEATS INTERACTIVELY~~~~~~~~~~~~~~~\n" << endl;

	do
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "How many tickets would you like to purchase (Max. 8)?: ";

		cin >> numSeats;
		cout << endl;
	} while (numSeats != 1 && numSeats != 2 && numSeats != 3 && numSeats != 4 && numSeats != 5 && numSeats != 6 && numSeats != 7 && numSeats != 8);

	return numSeats;
}

double showSeat::getSeatSelection()
{
	char ch = 0;
	int r = 0;
	int c = 0;
	displayFloorPlan(r, c);

	do
	{

		for (int i = 0; i < numSeats; i++) {

			char terminator = 0;

			do
			{
				cout << "Please enter a row number between 1 and 7: ";
				cin >> r;
				cout << endl;
			} while (r != 1 && r != 2 && r != 3 && r != 4 && r != 5 && r != 6 && r != 7);

			int r = rNum;

			do
			{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a column number between 1 and 6: ";
				cin >> c;
				cout << endl;
			} while (c != 1 && c != 2 && c != 3 && c != 4 && c != 5 && c != 6);

			do
			{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Are you happy with your decision? (Y = Yes || N = No): ";
				cin.get(ch);
				cout << endl;

			} while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');

			if (ch == 'N' || ch == 'n')
			{
				initialiseFloorPlan();
				cout << "Please re-select your seat/s: ";
				price = 0;
			}
			else if (ch == 'Y' || ch == 'y') {
				return price;
			}
		}

	} while (true);
}

void showSeat::displayFloorPlan(int r, int c)
{
	
}

void showSeat::calculatePrice(double& price)
{
	
}