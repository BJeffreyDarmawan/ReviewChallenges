#include <iostream>

using namespace std;

int factorial(int input)
{
	int factorialA = 1;
	
	for(int i = 0; i < input; input--)
	{
		factorialA *= input;
	}
	
	return factorialA;
}

int main()
{
	cout << factorial(10);
	
	
	return 0;
}
