#include<iostream>

using namespace std;

int main()
{
	
	float value, taxRate;
	
	cout << "Insert property value : "; cin >> value;
	cout << "Current tax rate each $100 assessed value : "; cin >>taxRate;
	
	float assess = (value * 0.6) - 5000;
	float taxProp = assess * (taxRate / 100);
	float taxPropPerMonth = taxProp / 4;
	cout << "Assessment value : " << assess << endl;
	cout << "Property Tax : " << taxProp << endl;
	cout << "Quarterly Tax : " << taxPropPerMonth << endl;

	
	
	return 0;
}
