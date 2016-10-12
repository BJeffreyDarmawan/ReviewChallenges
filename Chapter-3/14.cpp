#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	string month, year;
	float T;

	
	cout << "Insert month and year : "; cin >> month >> year;
	cout << "Insert total cash : "; cin >> T;
	
	float S = T / 1.06; 
	float County = T * 0.02;
	float State = T * 0.04;
	
	cout << setprecision(2) << fixed;
	cout << "Month : " << month << " " << year << endl << "--------------------" << endl;
	cout << "Total Collected:		$" << T << endl;
	cout << "Sales: 				$" << S << endl;
	cout << "County Sales Tax:		$" << County << endl;
	cout << "State Sales Tax:		$" << State << endl;
	cout << "Total Sales Tax:		$" << T-S << endl;
	
	return 0;
}
