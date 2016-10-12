#include<iostream>

using namespace std;

int main()
{
	float cookies;
	
	cout << "In order to make 48 cookies, you will need:" << endl;
	cout << "1.5 cups of sugar" << endl;
	cout << "1 cups of butter" << endl;
	cout << "2.75 cups of flour" << endl << endl; 
	
	cout << "How many cookies are you willing to make?" << endl; cin >> cookies;
	cout << endl; 
	
	cout << "In order to make " << cookies << " cookies, you need: " << endl;
	cout << (cookies / 48) * 1.5 << " cups of sugar" << endl;
	cout << (cookies / 48) * 1 << " cups of butter" << endl;
	cout << (cookies / 48) * 2.75 << " cups of flour" << endl;
	
	return 0;
}
