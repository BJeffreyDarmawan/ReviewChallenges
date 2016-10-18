#include<iostream>
#include<iomanip>

using namespace std;

struct weather{
	float rain, highTemp, lowTemp, aveTemp;
};

weather thisYear[12];

void inputData();
void outputData();

enum months {
	JANUARY,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

int main ()
{
	inputData();
	outputData();
	
	
	
	return 0;
}

void inputData()
{
	for (int months = JANUARY; months <= DECEMBER; months++)
	{
		cout << "Month " << months+1 << endl;
		cout << "Rainfall: "; cin >> thisYear[months].rain;
		cout << "High Temperature: "; cin >> thisYear[months].highTemp;
		cout << "Low Temperature: "; cin >> thisYear[months].lowTemp;
		cout << "=======================" << endl;
	}
	
}

void outputData()
{
	cout << "=======================================" << endl;
	cout << "- Month --- Rainfall ------ High Temp ---- Low Temp --- Avg. Temp --" << endl;
	
	for (int months = JANUARY; months <= DECEMBER; months++)
	{
		thisYear[months].aveTemp = (thisYear[months].highTemp + thisYear[months].lowTemp) * 1 / 2;
		cout << "    " << months+1 << "\t\t" << 
		thisYear[months].rain << "\t\t" << 
		thisYear[months].highTemp << "\t\t" << 
		thisYear[months].lowTemp << "\t    " << 
		thisYear[months].aveTemp << endl;
		
	}
		
}
