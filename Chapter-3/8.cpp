#include<iostream>

using namespace std;

int main()
{
	float weightPalet, weightTotal;
	float weightWidgets, weightWidget = 12.5;

	//Yukon Widget Company
	cout << "all input in pounds" << endl;
	cout << "Palet weight : "; cin >> weightPalet;
	cout << "Weight with widget : "; cin >> weightTotal;
	
	weightWidgets = weightTotal - weightPalet;
	int num = weightWidgets / weightWidget;
	
	cout << "So, number of widgets stacked on the pallet is : " << num;
	
	return 0;
}
