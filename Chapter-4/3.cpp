#include<iostream>

using namespace std;

int main ()
{
	int day, month, year;
	
	cout << "Please enter your date of birth: " << endl;
	cout << "Day: "; cin >> day;
	cout << "Month: "; cin >> month;
	cout << "Year: "; cin >> year;
	
	
	
	
	if (day * month == year)
	{
		cout << day << "/" << month << "/" << year << " Your date is magical" << endl;
	}
	else
	{
		cout << "Your date is not magical" << endl;
	}
	
	return 0;	
}
