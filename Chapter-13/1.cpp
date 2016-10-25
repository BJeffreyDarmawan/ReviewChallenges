#include <iostream>

using namespace std;

class Date{
	//properties
	int day = 1;
	int month = 1; 
	int year = 2016;
	public:
		Date(int day, int month, int year);
	//functions
	void printFirstForm();
	void printSecondForm();
	void printThirdForm();
};

void Date::printFirstForm()
{
	cout << month << "/" << day << "/" << year << endl;
}

void Date::printSecondForm()
{
	string month;
	switch (this->month)
	{
		case 1: month = "January"; break;
		case 2: month = "February"; break;
		case 3: month = "March"; break;
		case 4: month = "April"; break;
		case 5: month = "May"; break;
		case 6: month = "June"; break;
		case 7: month = "July"; break;
		case 8: month = "August"; break;
		case 9: month = "September"; break;
		case 10: month = "October"; break;
		case 11: month = "November"; break;
		case 12: month = "December"; break;
		default: break;

	}
	cout << month << " " << day << ", " << year << endl;
}

void Date::printThirdForm()
{
	string month;
	switch (this->month)
	{
		case 1: month = "January"; break;
		case 2: month = "February"; break;
		case 3: month = "March"; break;
		case 4: month = "April"; break;
		case 5: month = "May"; break;
		case 6: month = "June"; break;
		case 7: month = "July"; break;
		case 8: month = "August"; break;
		case 9: month = "September"; break;
		case 10: month = "October"; break;
		case 11: month = "November"; break;
		case 12: month = "December"; break;
		default: break;
	}
	cout << day << " " << month << " " << year << endl;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

int main()
{
	Date date1 = Date(25,12,2016);
	
	date1.printFirstForm();
	date1.printSecondForm();
	date1.printThirdForm();
	
	return 0;
}


