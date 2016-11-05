#include<iostream>

using namespace std;

int multi(int x, int y)
{
	if(y>0)
	{
		multi(x, y-1);
	}
	return x*y;	
}

int main()
{
	cout << multi(3,5) << endl;
	
	
	
	
	return 0;
}
