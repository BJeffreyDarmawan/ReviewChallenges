#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int classA = 15, classB = 12, classC = 9;
	int nClassA, nClassB, nClassC, totalSales;
	cout << "Number of class A sold : "; cin >> nClassA;
	cout << "Number of class B sold : "; cin >> nClassB;
	cout << "Number of class C sold : "; cin >> nClassC;
	
	totalSales = (nClassA * classA) + (nClassB * classB) + (nClassC * classC);
	
	cout << setprecision(2) << fixed;
	cout << "Total sales : $" << totalSales << endl;
	
	
	
	return 0;
}
