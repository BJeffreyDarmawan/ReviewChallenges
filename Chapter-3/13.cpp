#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float YEN_PER_DOLLAR = 98.93;
	const float EUROS_PER_DOLLAR = 0.74;
	float dollar;
	cout << "Insert amount of dollar "; cin >> dollar;
	
	float yen = YEN_PER_DOLLAR * dollar;
	float eur = EUROS_PER_DOLLAR * dollar;
	
	cout << setprecision(2) << fixed;
	cout << "1 Dollar = " << yen << " Yen" << endl;
	cout << "1 Dollar = " << eur << " Euros" << endl;
	
	return 0;
}
