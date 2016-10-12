#include<iostream>

using namespace std;

int main()
{
	float celcius;
	cout << "Insert temperature in Celcius : "; cin >> celcius;
	
	float farent = (celcius * 5 / 9) + 32;
	cout << "Temperature in Farenheit : " << farent;
	
	
	return 0;
}
