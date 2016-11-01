#include<iostream>

using namespace std;

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
		void setDay(int);
		void setMonth(int);
		class InvalidDay{	};
		class InvalidMonth{	};
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

void Date::setDay(int day)
{
	if(day < 1 || day > 31)
	{
		throw InvalidDay();
	}
	else
		this->day=day;
}

void Date::setMonth(int month)
{
	if(month < 1 || month > 12)
	{
		throw InvalidMonth();
	}
	else
		this->month=month;
}

int main()
{
	Date date1 = Date(25,12,2016);
	
	date1.printFirstForm();
	date1.printSecondForm();
	date1.printThirdForm();
	
	bool a = true;
	try
	{
		int a;
		cout << "Insret day: "; cin >> a;
		date1.setDay(a);
		cout << "Insret month: "; cin >> a;
		date1.setMonth(a);
		
	}
	catch (Date::InvalidDay)
	{
		cout << "Invalid Day!!" << endl;
		a = false;
	}
	catch (Date::InvalidMonth)
	{
		cout << "Invalid Month!!" << endl;
		a = false;
	}
	
	if(a){
		cout << "Print date again: " << endl;
		date1.printFirstForm();
		date1.printSecondForm();
		date1.printThirdForm();
	}
	
	return 0;
}

void checkDay(int day, Date &date)
{
	if(day < 1 || day > 31)
	{
		string a = "Error weehhh!! \n";
		throw a;
	}
	else
		date.setDay(day);
	
	
}

void checkMonth(int month, Date &date)
{
	if(month < 1 || month > 12)
	{
		string a = "Error weehhh!! \n";
		throw a;
	}
	else
		date.setMonth(month);
	
	
}


