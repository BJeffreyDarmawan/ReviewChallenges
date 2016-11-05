#include<iostream>

using namespace std;

void sign(int n)
{
	if(n > 0)
	{
		cout << "No Parking" << endl;
		sign(n-1);
	}
}

int main()
{
	sign(3);
	
	
	
	return 0;
}
