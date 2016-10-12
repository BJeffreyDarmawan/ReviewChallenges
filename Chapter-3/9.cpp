#include<iostream>

using namespace std;

int main()
{
	int bagHoldCookie = 30, serving = 10, eachCals = 300;
	float perServing = bagHoldCookie / serving;
	float eachCalsCookie = eachCals / perServing;
	float numOfCookies;
	
	cout << "A bag of cookies usually contains " << bagHoldCookie << " cookies." << endl;
	cout << "A bag of cookies usually indicated as " << serving << " servings." << endl;
	cout << "A serving of cookies equals too " << eachCals << " calories." << endl;
	cout << "Which means each servings contains " << perServing << " cookies." << endl;
	cout << "Which also means each cookie provides " << eachCalsCookie << " calories." << endl;
	
	cout << endl << "Please insert how many cookies you ate : "; cin >> numOfCookies;
	
	float calConsumed = numOfCookies * eachCalsCookie;
	cout << endl << "You just consumed " << calConsumed << " calories."; 
	
	return 0;
}
