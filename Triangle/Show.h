#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class show
{
public:
	show();
	~show();
	void selectShow(string& showName, string& showDate);
	string selectTime(string& showName, string& showDate, string& showTime);

protected:
	string showName;
	string showDate;
	string showTime;
};

show::show()
{
	showName = "";
	showDate = "";
	showTime = "";
};

show::~show()
{
}

void show::selectShow(string& showName, string& showDate)
{
	char ch;
	char terminator;


	cout << "\n~~~~~~~~~~~~~~~~~~~~~ SELECT AN UPCOMING SHOW ~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "1. Star Wars: The Musical (20/05/2013)" << endl;
	cout << "2. Les Miserables (21/05/2013)" << endl;
	cout << "3. The Phantom of the Opera (22/05/2013)" << endl;

	cin.clear();
	cin.ignore(100, '\n');
	cout << "Please select a show number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a valid show number; ";
		cin.get(ch);
	}

	switch (ch)
	{
	case '1': showName = "Star Wars : The Musical", showDate = "20/05/2013";
		break;
	case '2': showName = "Les Miserables", showDate = "21/05/2013";
		break;
	case '3': showName = "The Phantom of the Opera", showDate = "22/05/2013";
		break;
	}

	this->showName = showName;
	this->showDate = showDate;
	cin.get(terminator);
}

string show::selectTime(string& showName, string& showDate, string& showTime)
{
	char ch = 0;
	char terminator = 0;


	cout << "\n~~~~~~~~~~~~~~~~~~~~~ SELECT A TIME SLOT ~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "1. MORNING SLOT" << endl;
	cout << "2. AFTERNOON SLOT" << endl;
	cout << "3. EVENING SLOT" << endl;

	cin.clear();
	cin.ignore(100, '\n');
	cout << "Please select a valid time slot number" << endl;
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a valid show number; ";
		cin.get(ch);
	}

	switch (ch)
	{
	case'1': showTime = "morning slot";
		break;
	case'2': showTime = "afternoon slot";
		break;
	case '3': showTime = "evening slot";
		break;
	}

	this->showTime = showTime;
	cin.get(terminator);

	cout << "Show - " << showName << endl;
	cout << "Time - " << showTime << endl;
	cout << endl;

	return showTime;
}







