
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>

using namespace std;

class customer 
{
public:
	void getLogin();
	void getProfileInfo(string& fName, string& sName, string& address);
	void getPaymentInfo();
	//void initialise();
	//void display_area();

protected:
	string fName;
	string sName;
	string address;
};

void customer::getLogin()
{
	string username;

	string password;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~ LOG IN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "\n Welcome to the Bucks Centre for the Performing Arts ticket purchasing system!" << endl;
	cout << "                                  Please log in." << endl;

	cout << "Enter username: ";
	getline(cin, username);

	while (username.length() > 10)

	{
		cout << "Your username should be no more than 10 characters long." << endl;
		cout << "Please re-enter your username: ";
		getline(cin, username);
	}

	cout << "Enter password: ";
	getline(cin, password);

	while (password.length() > 10)
	{
		cout << "Your password should be no more than 10 characters long." << endl;
		cout << "Please re-enter your password: ";
		getline(cin, password);
	}
}


void customer::getProfileInfo(string& fName, string& sName, string& address)
{
	char ch = 0;
	char terminator = 0;

	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~YOUR INFORMATION~~~~~~~~~~~~~~~~~~~~\n" << endl;


		cout << "Please enter your first name here: ";
		getline(cin, fName);
		cout << endl;
		cout << "Please enter your second name here: ";
		getline(cin, sName);
		cout << endl;
		cout << "Please enter your address here: ";
		getline(cin, address);
		cout << endl;

		cout << "First Name - " << fName << endl;
		cout << "Second Name - " << sName << endl;
		cout << "Address -  " << address << endl;
		cout <<
			"=====================================================" << endl;
		cout <<
			"=====================================================\n\n" << endl;

		do
		{
			cout << "First Name - " << fName << endl;
			cout << "Second Name - " << sName << endl;
			cout << "Address -  " << address << endl;
			cout << endl;
			cout << "\nHave you entered the correct information?";
			cout << endl;
			cout << "Type Y for Yes || Type N for No";
			cin.get(ch);
		} while (ch != 'Y' && ch != 'N' && ch != 'n');
		cin.get(terminator);

		}


void customer::getPaymentInfo()
{
	string bankFirstName;
	string bankSurname;

	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~PAYMENT INFO~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "Enter your bank details: ";
	cout <<
		"========================================================" << endl;
	cout << "Enter first name as stated on your bank account: ";
	getline(cin, bankFirstName);

	while (bankFirstName.length() > 50)
	{
		cout << "Your bank first name cannot be more than 100 characers long." << endl;
		cout << "Re-enter your first name as stated on your bank account: ";
		getline(cin, bankFirstName);
	}

}






