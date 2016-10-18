#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

void input();
void output();
void highest();

struct info{
	string sName;
	int nScore, nNum;
};

info player[12];

int total = 0;

int main()
{
	
	input();
	output();
	highest();
	
	
	
	
	return 0;
}


void input()
{
	bool flag;
	for(int i = 0; i < 2; i ++)
	{
		do{
			flag = true;
			cout << "Player " << i + 1 << " Name: ";  getline(cin, player[i].sName); //
			cout << "Player " << i + 1 << " Number: "; cin >> player[i].nNum;
			cout << "Player " << i + 1 << " Points: "; cin >> player[i].nScore; cin.ignore();
			if(player[i].nNum < 0 || player[i].nScore < 0)
			{
				cout << "Please re-enter data " << endl << endl;
				flag = false;
			}
			cout << "===================" << endl;
		} while (!flag);
		
		total += player[i].nScore;	
	}
	
}

void output()
{
	cout << "==========================================" << endl;
	cout << "-------------- STATISTICS ----------------" << endl;
	cout << "==========================================" << endl;
	
	for(int i = 0; i < 2; i ++)
	{
		cout << player[i].sName;
		
		if(player[i].sName.length() > 4)
			cout << "\t";	
		else
			cout << "\t\t";
		
		cout << player[i].nNum << "\t\t"<<
		player[i].nScore << endl;
			
	}
	
	
	
}

void highest()
{
	info highest;
	highest.nScore = 0;

	for(int i = 0; i < 2; i ++)
	{
		if (player[i].nScore > highest.nScore)
		{
			highest = player[i];
		
		}
		
		
	}
	
	cout<< endl << "Top scorer is " 
		<< highest.sName << " with player number "
		<< highest.nNum << " who scored " 
		<< highest.nScore << " goals" << endl;
}

