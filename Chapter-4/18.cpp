#include<iostream>

using namespace std;

int main ()
{
	float gramFat, calFood, calFat, percFat;
	
	cout << "Insert calories: "; cin >> calFood;
	cout << "Insert fat in grams: "; cin >> gramFat;
	
	calFat = gramFat * 9;
	percFat = calFat / calFood * 100;
	
	if(calFat < 0 || gramFat < 0)
	{
		cout << "Please insert correct amount of fat / calories" << endl;
	}
	else if (percFat > 99)
	{
		cout << "Either food calories or grams of fat is wrong inserted" << endl;
	}
	else
	{
		cout << "Fat calories percentage: " << percFat << "%" << endl;
	
		if (percFat < 30)
		{
			cout << "Food is low fat" << endl;
		}
		else cout << "Food is full of fat" << endl;
	}
		
		return 0;
}
