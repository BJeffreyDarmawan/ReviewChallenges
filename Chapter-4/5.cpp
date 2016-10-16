#include<iostream>

using namespace std;

int main ()
{
	float BMI, weight, height;
	
	cout << "Insert your weight (pounds): "; cin >> weight;
	cout << "Insert your height (inches): "; cin >> height;
	
	if (weight < 0 || height < 0)
		cout << "Please enter the correct weight and height" << endl;
	else
	{
	BMI = weight * 703 / (height * height);
	cout << "Your BMI is : " << BMI << endl;
	
	if (BMI > 18.5 && BMI < 25)
		cout << "Your weight is considered as normal " << endl;
	else if (BMI < 18.5)
		cout << "Your body is underweight " << endl;
	else 
		cout << "Your body is overweight " << endl;
	}
	
	return 0;
}
