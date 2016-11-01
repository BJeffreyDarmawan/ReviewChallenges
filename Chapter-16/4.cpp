#include<iostream>
#include<cmath>

using namespace std;

template <typename test>
test absolute(test num)
{
	test numba;
	numba = pow(num,2);
	numba = pow(numba,0.5);
	return numba;
	
}


int main()
{
	cout << absolute(-99) << endl;
	cout << absolute(-3) << endl;
	cout << absolute(10) << endl;
	
	
	
	return 0;
}
