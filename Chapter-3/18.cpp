#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
//fail, sorry
int main()
{
	float amount, principal, rate, T;
	
	cout << "Interest Rate (%):     "; cin >> rate;
	cout << "Times Compounded:      "; cin >> T; 
	cout << "Principal:             $"; cin >> principal;
	cout << endl;
	cout << (rate/T)+1 << endl;
	cout << pow(1+(rate/T),T)<< endl;
	cout << principal * (1+(rate/T)) <<endl;
	amount = principal * pow((1+(rate/T)),T);
	float interest = amount - principal;
	cout << "Interest:              $" << interest << endl;
	cout << "Amount in savings:     $" << amount << endl;
	
	
	
	return 0;
}
