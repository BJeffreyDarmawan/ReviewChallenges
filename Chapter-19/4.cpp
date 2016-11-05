#include<iostream>

using namespace std;

int sum(int *arrayOfNumber, int size) //if I use this, it returns 150..
{

	if(size >= 0)
	{
		arrayOfNumber[size-1] += sum(arrayOfNumber, size-1);
		return arrayOfNumber[size-1];
	}
	else
		return 0; //because if all return arrayOfNumber[size-1], when size = 0, it will return random number
	

}
int main()
{
	int size = 10;//i dont know why, the maximum is 7.. more than that, the result is not correct
	int arr[size] = {1,2,3,4,5,6,7,8,9,10}; 
	
	cout << sum(arr, size) << endl;
	
	/*size = 10;
	int waw[size] = {1,2,3,4,5,6,7,8,9,10};
	cout << correctSum(waw, size);
	*/
	
	return 0;
}
