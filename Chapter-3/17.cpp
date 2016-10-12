#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	srand (time(NULL));
	
	int num1 = rand() % 999;
	int num2 = rand() % 999;
	
	cout << setw(5) << num1 << endl;
	cout << setw(5) << num2 << endl;
	cout << "+____" << endl;
	//system("pause");
	getch ();
	cout << setw(5) << num1 + num2 << endl;
	
	
	return 0;
}
