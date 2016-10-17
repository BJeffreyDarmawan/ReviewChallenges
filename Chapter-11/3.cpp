#include<iostream>
#include<iomanip>

using namespace std;

struct data
{
	int first, second, third, fourth;
	int totalAnnual, ave;
};


int main ()
{
	
	data east, west, north, south;
	
	bool flag;
	do{
		flag=true;
		cout << "Please insert sales for East Division: " << endl;
		cout << "First-Quarter Sales: "; cin >> east.first;
		cout << "Second-Quarter Sales: "; cin >> east.second;
		cout << "Third-QUarter Sales: "; cin >> east.third;
		cout << "Fourth-Quarter Sales: "; cin >> east.fourth;
		cout << endl;
		if(east.first < 0 || east.second < 0 || east.third < 0 || east.fourth < 0)
		{
			cout << "Please re-enter sales " << endl << endl;
			flag = false;
		}
		
	}while(!flag); //while (flag is not true), but flag is true, so condition doesnt meet the criteria
	
	east.totalAnnual = east.first + east.second + east.third + east.fourth;
	east.ave = east.totalAnnual / 4;
	
	
	do{
		flag=true;
		cout << "Please insert sales for West Division: " << endl;
		cout << "First-Quarter Sales: "; cin >> west.first;
		cout << "Second-Quarter Sales: "; cin >> west.second;
		cout << "Third-QUarter Sales: "; cin >> west.third;
		cout << "Fourth-Quarter Sales: "; cin >> west.fourth;
		cout << endl;
		if(west.first < 0 || west.second < 0 || west.third < 0 || west.fourth < 0)
		{
			cout << "Please re-enter sales " << endl << endl;
			flag = false;
		}
		
	}while(!flag);
	
	west.totalAnnual = west.first + west.second + west.third + west.fourth;
	west.ave = west.totalAnnual / 4;
	
	
	do{
		flag=true;
		cout << "Please insert sales for North Division: " << endl;
		cout << "First-Quarter Sales: "; cin >> north.first;
		cout << "Second-Quarter Sales: "; cin >> north.second;
		cout << "Third-QUarter Sales: "; cin >> north.third;
		cout << "Fourth-Quarter Sales: "; cin >> north.fourth;
		cout << endl;
		if(north.first < 0 || north.second < 0 || north.third < 0 || north.fourth < 0)
		{
			cout << "Please re-enter sales " << endl << endl;
			flag = false;
		}
		
	}while(!flag);
	
	north.totalAnnual = north.first + north.second + north.third + north.fourth;
	north.ave = north.totalAnnual / 4;
	
	
	do{
		flag=true;
		cout << "Please insert sales for South Division: " << endl;
		cout << "First-Quarter Sales: "; cin >> south.first;
		cout << "Second-Quarter Sales: "; cin >> south.second;
		cout << "Third-QUarter Sales: "; cin >> south.third;
		cout << "Fourth-Quarter Sales: "; cin >> south.fourth;
		cout << endl;
		if(south.first < 0 || south.second < 0 || south.third < 0 || south.fourth < 0)
		{
			cout << "Please re-enter sales " << endl << endl;
			flag = false;
		}
		
	}while(!flag);
	
	south.totalAnnual = south.first + south.second + south.third + south.fourth;
	south.ave = south.totalAnnual / 4;
	
	cout << "----------------------------------------------------" << endl;
	cout << " Division   Q-1   Q-2   Q-3   Q-4   Annual   Average" << endl;
	cout << "----------------------------------------------------" << endl;
	
	cout << setw(5) << "East" << setw(10)
	<< east.first << setw(6)
	<< east.second << setw(6)
	<< east.third << setw(6) 
	<< east.fourth << setw(7)
	<< east.totalAnnual << setw(10)
	<< east.ave << endl;
	
	cout << setw(5) << "West" << setw(10)
	<< west.first << setw(6)
	<< west.second << setw(6)
	<< west.third << setw(6) 
	<< west.fourth << setw(7)
	<< west.totalAnnual << setw(10)
	<< west.ave << endl;
	
	cout << setw(5) << "East" << setw(10)
	<< north.first << setw(6)
	<< north.second << setw(6)
	<< north.third << setw(6) 
	<< north.fourth << setw(7)
	<< north.totalAnnual << setw(10)
	<< north.ave << endl;
	
	cout << setw(5) << "South" << setw(10)
	<< south.first << setw(6)
	<< south.second << setw(6)
	<< south.third << setw(6) 
	<< south.fourth << setw(7)
	<< south.totalAnnual << setw(10)
	<< south.ave << endl;
	
	
	return 0;
}
