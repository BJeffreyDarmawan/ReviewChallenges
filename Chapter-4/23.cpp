#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main ()
{
	int choice;
	float area;
	cout << "Geometry Calculator" << endl;
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit" << endl;
	cout << "Enter your choice (1-4): "; cin >> choice;
	
	switch(choice)
	{
		case 1 : {
			float rad, pi = 3.14159;
			cout << "Insert radius: "; cin >> rad;
			area = pi * pow(rad,2);
			cout << "Area is: " << area << endl;
			break;
			}
		case 2 : {
			float l, w;
			cout << "Insert length: "; cin >> l;
			cout << "Insert width: "; cin >> w;
			area = l * w;
			cout << "Area is: " << area << endl;
			break;
			}
		case 3 : {
			float base, height;
			cout << "Insert base: "; cin >> base;
			cout << "Insert height: "; cin >> height;
			area = base * height * 0.5;
			cout << "Area is: " << area << endl;
			break;
			}	
		case 4 : //exit (0);
			break;
		
		default : cout << "Nothing happened" << endl;
	}
	
	return 0;
}
