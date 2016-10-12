#include<iostream>

using namespace std;

int main()
{
	int loan, insurance, gas, oil, tires, maint;
	
	cout << "Insert monthly cost for loan payment : "; cin >> loan;
	cout << "Insert monthly cost for insurance : "; cin >> insurance;
	cout << "Insert monthly cost for gas : "; cin >> gas;
	cout << "Insert monthly cost for oil : "; cin >> oil;
	cout << "Insert monthly cost for tires : "; cin >> tires;
	cout << "Insert monthly cost for maintenance : "; cin >> maint;
	
	int monthly = loan + insurance + gas + oil + tires + maint;
	int annual = monthly * 12;
	
	cout << "Your total monthly cost for all items is " << monthly << endl;
	cout << "Your total annual cost for all items is " << annual << endl;
	
	return 0;
}
