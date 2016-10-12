#include<iostream>

using namespace std;

int main()
{
	string movieName;
	float rev, dist, childAmount, adultAmount, childPrice = 6.0, adultPrice = 10.0;
	
	cout << "Movie Name : "; cin >> movieName;
	cout << "Adult ticket sold : "; cin >> adultAmount;
	cout << "Child ticket sold : "; cin >> childAmount;
	cout << endl;
	
	cout << "============================" << endl << endl;
	
	float gross = (childAmount * childPrice) + (adultAmount * adultPrice);
	float nett = gross * 0.2;
	float distributor = gross - nett;
	
	cout << "Movie Name :                       " << movieName << endl;
	cout << "Adult ticket sold :                " << adultAmount << endl;
	cout << "Child ticket sold :                " << childAmount << endl;
	cout << "Gross Box Office Profit :        $ " << gross << endl;
	cout << "Net Box Office Profit :          $ " << nett << endl;
	cout << "Amount Paid to Distributor :     $ " << distributor << endl;
	
	
	
	
	return 0;
}
