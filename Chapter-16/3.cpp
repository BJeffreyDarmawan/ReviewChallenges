#include<iostream>

using namespace std;

template <typename test>
test minimum(test num1, test num2)
{
	if(num1 < num2)
		return num1;
	else
		return num2;
}

template <typename test>
test maximum(test num1, test num2)
{
	if(num1 > num2)
		return num1;
	else
		return num2;
}


int main()
{
	
	cout << minimum(1000,100) << endl;
	cout << minimum(3.9, 3.2) << endl;
	cout << maximum('a', 'b') << endl; //char works
	cout << maximum("a", "b") << endl; // string doesnt..
	
	
	return 0;
}
