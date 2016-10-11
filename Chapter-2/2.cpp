#include <iostream>

using namespace std;

int main()
{
	const float eastCoastPercent = 0.58;
	
	int sales = 8600000;
	int eastCoastAmount;
	
	eastCoastAmount = sales * eastCoastPercent;
	
	cout << "The East Coast generates : USD " << eastCoastAmount;
	
	return 0;
}
