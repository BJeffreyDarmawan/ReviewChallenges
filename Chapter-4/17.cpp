#include<iostream>

using namespace std;

int main ()
{
	float height1, height2, height3;
	int date1, date2, date3;
	
	string name;
	cout << "Vaulter's name: "; cin >> name;
	cout << "Date 1: "; cin >> date1;
	cout << "Date 2: "; cin >> date2;
	cout << "Date 3: "; cin >> date3;
	cout << "Vault height 1: "; cin >> height1;
	cout << "Vault height 2: "; cin >> height2;
	cout << "Vault height 3: "; cin >> height3;
	
	if (height1 < 2 || height1 > 5 || height2 < 2 || height2 > 5 || height3 < 2 || height3 > 5)
		cout << "Enter realistic height la!" << endl;
	else 
	{
		cout << name << endl;
		if (height1 > height2)
		{
			if (height1 > height3)
			{
				cout << date1 << ", " << height1 << endl;
				if (height2 > height3)
				{
					cout << date2 << ", " << height2 << endl;
					cout << date3 << ", " << height3 << endl;
				}
				else
				{
					cout << date3 << ", " << height3 << endl;
					cout << date2 << ", " << height2 << endl;
				}
			}
			else //height3 > height1;
			{
				cout << date3 << ", " << height3 << endl;
				cout << date1 << ", " << height1 << endl;
				cout << date2 << ", " << height2 << endl;
			}
		}	
		else //height2 > height1  
		{
			if (height2 > height3)
			{
				cout << date2 << ", " << height2 << endl;
				if (height1 > height3)
				{
					cout << date1 << ", " << height1 << endl;
					cout << date3 << ", " << height3 << endl;
				}
				else
				{
					cout << date3 << ", " << height3 << endl;
					cout << date1 << ", " << height1 << endl;
				}
			}
			
			else //height3 > height2
			{
				cout << date3 << ", " << height3 << endl;
				cout << date2 << ", " << height2 << endl;
				cout << date1 << ", " << height1 << endl;
			}
		}	
			
	}	
	
	
	return 0;
}
