#include<iostream>

using namespace std;

int main ()
{
	int a, b;
	
	cout << "Enter first number : "; cin >> a;
	cout << "Enter second number : "; cin >> b;
	
	if (a>b)
	{
		cout << "First number, which is " << a << ", is bigger than second number (" << b << ")" << endl;
	}
	else
	{
		cout << "Second number, which is " << b << ", is bigger than first number (" << a << ")" << endl;
	}
	
	
	return 0;	
}
