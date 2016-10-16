#include<iostream>

using namespace std;

int main ()
{
	float discount, quantity, one = 99;
	
	cout << "A software package costs $99 " << endl;
	cout << "Please enter how many you're willing to buy: "; cin >> quantity;
	
	if (quantity >= 10 && quantity <= 19)
		discount = 0.2;
	else if (quantity >= 20 && quantity <= 49)	
		discount =  0.3;
	else if (quantity >= 50 && quantity <= 99)	
		discount = 0.4;
	else 
		discount = 0.5;
		
	float total = (quantity * one) - (quantity * one * discount);	
	cout << "Total cost: " << total;
	
			
	return 0;
}
