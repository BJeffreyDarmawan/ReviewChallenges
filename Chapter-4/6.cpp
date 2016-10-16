#include<iostream>

using namespace std;

int main ()
{
	float weight, mass, gravity = 9.8;
	
	cout << "Insert object mass : "; cin >> mass; 
	
	weight = mass * gravity;
	cout << "The object weight is : " << weight << endl;
	
	if (weight > 1000)
		cout << "The object is too heavy" << endl;
	else if (weight < 10)
		cout << "The object is too light " << endl;
	else {}
	
	
	
	return 0;
}
