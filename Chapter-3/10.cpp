#include<iostream>

using namespace std;

int main()
{
	float insure = 0.8;
	float valueProp, mustInsure;
	
	cout << "Insert replacement cost of a building "; cin >> valueProp;
	
	mustInsure = valueProp * insure;
	cout << "You should buy " << mustInsure << " worth of insurance";
	
		
	return 0;
}
