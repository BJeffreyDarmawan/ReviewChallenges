#include <iostream>

using namespace std;

int main()
{
	float taxState = 0.04, taxCountry = 0.02;
	int sales = 95;
	
	float taxTotal = sales * (taxState+taxCountry);
	
	cout<<taxTotal;
	
	return 0;
}
