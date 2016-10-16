#include<iostream>

using namespace std;

int main ()
{
	float time, speed, distance;
	int choice;
	cout << "Please choose between CO2 (1), Air (2), Helium (3), Hidrogen (4) "; cin >> choice;
	cout << "Please gime us time "; cin >> time;
	
	if (time < 0 || time > 30)
	{
		cout << "Please restart the program" << endl;
	}
	else {
		switch (choice)
		{
			case 1 : speed = 258;
				break;
			case 2 : speed = 331.5;
				break;
			case 3 : speed = 972;
				break;
			case 4 : speed = 1270;
				break;	
			default : cout << "Wrong choice brotha" << endl;			
		}	
		
		distance = time * speed;
		cout << "It is " << distance << " meters from here" << endl;
		
	}
	return 0;
}
