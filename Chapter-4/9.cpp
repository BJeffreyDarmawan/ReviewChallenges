#include<iostream>

using namespace std;

int main ()
{
	int nPennies, nNickels, nDimes, nQuarters;
	int penny = 1, nickel = 5, dime = 10, quarter = 25;
	
	cout << "Insert number of Pennies: "; cin >> nPennies;
	cout << "Insert number of Nickels: "; cin >> nNickels;
	cout << "Insert number of Dimes: "; cin >> nDimes;
	cout << "Insert number of Quarters: "; cin >> nQuarters;
	
	int total = nPennies * penny + nNickels * nickel + nDimes * dime + nQuarters * quarter;
	
	if (total == 100)
		cout << "Congratulations! You guessed exactly 1 Dollar!" << endl;
	else
		cout << "Sorry, you failed to guess exactly 1 Dollar! Please try again!" << endl;
	
	
	return 0;
}
