#include<iostream>

using namespace std;

int main ()
{
	int a;
	cout << "Enter a number : "; cin >> a;	
	
	switch (a)
	{
		case 1 : cout << "Roman numeral is : I" << endl;
				break;
		case 2 : cout << "Roman numeral is : II" << endl;
				break;
		case 3 : cout << "Roman numeral is : III" << endl;
				break;
		case 4 : cout << "Roman numeral is : IV" << endl;
				break;
		case 5 : cout << "Roman numeral is : V" << endl;
				break;
		case 6 : cout << "Roman numeral is : VI" << endl;
				break;
		case 7 : cout << "Roman numeral is : VII" << endl;
				break;
		case 8 : cout << "Roman numeral is : VIII" << endl;
				break;
		case 9 : cout << "Roman numeral is : IX" << endl;
				break;
		case 10 : cout << "Roman numeral is : x" << endl;
				break;
		default : cout << "Input error! Please enter 1 - 10 number!" << endl;
	}
	
	
	return 0;	
}
