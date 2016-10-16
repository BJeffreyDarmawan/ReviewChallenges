#include<iostream>

using namespace std;

void displayNumOfDays(int month);

int main ()
{
	int month, year;
	
	cout << "Enter a month (1 - 12): "; cin >> month;
	cout << "Enter year: "; cin >> year;
	
	if (year%100 == 0)
	{
		if (year%400 == 0)
		{
			if (month == 2)
			{
				cout << "29 Days" << endl;
			}
			else 
			displayNumOfDays(month);
		}
		else
		displayNumOfDays(month);
	}	
	else if (year%4 == 0)
	{
		if (month == 2)
			{
				cout << "29 Days" << endl;
			}
			else 
			displayNumOfDays(month);
	}
	else
	{
		displayNumOfDays(month);
	}
	
	return 0;
}


void displayNumOfDays(int month)
{
	switch (month)
	{
		case 1 : cout << "31 days" << endl;	
				break;
		case 2 : cout << "28 days" << endl;	
				break;
		case 3 : cout << "31 days" << endl;	
				break;		
		case 4 : cout << "30 days" << endl;	
				break;
		case 5 : cout << "31 days" << endl;	
				break;
		case 6 : cout << "30 days" << endl;	
				break;
		case 7 : cout << "31 days" << endl;	
				break;
		case 8 : cout << "31 days" << endl;	
				break;
		case 9 : cout << "30 days" << endl;	
				break;
		case 10 : cout << "31 days" << endl;	
				break;
		case 11 : cout << "30 days" << endl;	
				break;
		case 12 : cout << "31 days" << endl;	
				break;
	}
}

