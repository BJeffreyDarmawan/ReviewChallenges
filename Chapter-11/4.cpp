#include<iostream>
#include<iomanip>

using namespace std;

struct weather{
	float rain, highTemp, lowTemp, aveTemp;
};

weather thisYear[12];

void inputData();
void outputData();

int main ()
{
	inputData();
	outputData();
	
	
	
	return 0;
}

void inputData()
{
	for (int i = 0; i < 12; i++)
	{
		cout << "Month " << i+1 << endl;
		cout << "Rainfall: "; cin >> thisYear[i].rain;
		cout << "High Temperature: "; cin >> thisYear[i].highTemp;
		cout << "Low Temperature: "; cin >> thisYear[i].lowTemp;
		cout << "=======================" << endl;
	}
	
}

void outputData()
{
	cout << "=======================================" << endl;
	cout << "- Month --- Rainfall ------ High Temp ---- Low Temp --- Avg. Temp --" << endl;
	
	for (int i = 0; i < 12; i++)
	{
		thisYear[i].aveTemp = (thisYear[i].highTemp + thisYear[i].lowTemp) * 1 / 2;
		cout << "    " << i+1 << "\t\t" << 
		thisYear[i].rain << "\t\t" << 
		thisYear[i].highTemp << "\t\t" << 
		thisYear[i].lowTemp << "\t    " << 
		thisYear[i].aveTemp << endl;
		
	}
		
}
