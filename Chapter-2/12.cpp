#include<iostream>
using namespace std;
int main()
{
	float acreInSqFeet = 43560;
	const float sqFeet = 391876;
	float calculate = sqFeet / acreInSqFeet;
	
	cout<<"391,876 square feet in acre is "<<calculate<<endl;
	
	return 0;
}
