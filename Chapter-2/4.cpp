#include<iostream>
using namespace std;

int main()
{
	float taxAmount, tipAmount, totalBill, 
	mealCost = 88.67, tax = 0.0675, tip = 0.2;
	
	taxAmount = mealCost * tax;
	tipAmount = mealCost * tip;
	totalBill = mealCost + taxAmount + tipAmount;
	
	cout<<"Tax Amount is "<<taxAmount<<endl;
	cout<<"Tip Amount is "<<tipAmount<<endl;
	cout<<"Total Bill is "<<totalBill<<endl;
	
	
	
	return 0;
}
