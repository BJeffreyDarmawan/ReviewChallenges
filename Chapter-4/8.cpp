#include<iostream>

using namespace std;

int main ()
{
	string color1, color2, color3;
	
	cout << "Choose 2 colors between red, yellow, blue: " << endl;
	cout << "Please enter color 1: "; cin >> color1;
	cout << "Please enter color 2: "; cin >> color2;
	
	//either color one or color two is "red" + "blue"
	if ((color1 == "red" || color2 == "red") && (color1 == "blue" || color2 == "blue"))
		cout << "The color mixer shows purple color" << endl;
	else if ((color1 == "red" || color2 == "red") && (color1 == "yellow" || color2 == "yellow"))
		cout << "The color mixer shows orange color" << endl;
	else if ((color1 == "blue" || color2 == "blue") && (color1 == "yellow" || color2 == "yellow"))
		cout << "The color mixer shows green color " << endl;
	else 
		cout << "You entered wrong color " << endl;	
		
		
		
	return 0;
}
