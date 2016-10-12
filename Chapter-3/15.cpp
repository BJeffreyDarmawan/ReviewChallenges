#include<iostream>

using namespace std;

int main()
{
	float value;
	
	cout << "Insert property value : "; cin >> value;
	
	
	float assess = value * 0.6;
	float taxProp = assess * (0.75 / 100);
	cout << "Assessment value : " << assess << endl;
	cout << "Property Tax : " << taxProp << endl;
	
	
	return 0;
}
