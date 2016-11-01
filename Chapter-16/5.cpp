#include<iostream>

using namespace std;

template<typename test>
test total(test i) //why cant I use (int i) parameter..?
{
	test total=0, input=0;
	for(int j = 0; j < i; j++)
	{
		cout << "Insert a value: "; cin >> input;
		total+=input;
	}
	return total;
}

int main()
{
	int input;
	cout << "How many values you want to total? "; cin >> input;
	cout << "Total is: " << total(input);
	
	
	return 0;
}
