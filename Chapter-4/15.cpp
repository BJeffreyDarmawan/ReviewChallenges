#include<iostream>

using namespace std;

int main ()
{
	float rate, weight, dist, total;
	cout << "Insert weight: "; cin >> weight;
	cout << "Insert distance: "; cin >> dist;
	
	if (weight < 0 || weight > 20 || dist < 10 || dist > 3000)
		cout << "Your input cant be processed" << endl;
	else
	{
		if (weight > 0 && weight <= 2)
			rate = 1.1;
		else if (weight > 2  && weight <= 6)
			rate = 2.2;
		else if (weight > 6 && weight <= 10)
			rate = 3.7;
		else if (weight > 10 && weight <= 20)
			rate = 4.8;
			
		total = rate * dist / 500;
		cout << "Fee is : " << total;					
	}	
	
	return 0;
}
