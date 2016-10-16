#include<iostream>

using namespace std;

int main ()
{
	int lengthOne, lengthTwo, widthOne, widthTwo;
	
	cout << "Rectangle 1: " << endl;
	cout << "Length: "; cin >> lengthOne;
	cout << "Width: "; cin >> widthOne;
	cout << endl;
	cout << "Rectangle 2: " <<endl;
	cout << "Length: "; cin >> lengthTwo;
	cout << "Width: "; cin >> widthTwo;
	
	cout << "Area of Rectangle 1 is " << lengthOne * widthOne << endl;
	cout << "Area of Rectangle 2 is " << lengthTwo * widthTwo << endl;
	
	if (lengthOne * widthOne > lengthTwo * widthTwo)
	cout << "Rectangle 1 is larger than Rectangle 2 " << endl;
	else
	cout << "Rectangle 2 is larger than Rectangle 1 " << endl;	
	
	return 0;	
}
