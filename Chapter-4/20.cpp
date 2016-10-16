#include<iostream>

using namespace std;

int main ()
{
	float distance, speed;
	int choice;
	
	cout << "Please choose between Air (1), Water (2), or Steel (3) "; cin >> choice;
	cout << "Insert distance: "; cin >> distance;
	
	if (distance < 0)
	{
		cout << "Please retry the program" << endl;
	}
	else
	{
		switch (choice)
		{
			case 1 : speed = 1100;
				break;
			case 2 : speed = 4900;
				break;
			case 3 : speed = 16400;
				break;
			default : cout << "Wrong choice brotha" << endl;			
		}
		
		float time = distance / speed;
		cout << "In seconds, the time is: " << time << endl;
		
	}	return 0;
}
