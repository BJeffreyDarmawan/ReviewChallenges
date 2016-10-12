#include<iostream>

using namespace std;

int main()
{
	float gas, distance, MPG;
	cout<<"Insert gas tank : "; cin>>gas;
	cout<<"Insert maximum distance : "; cin>>distance;
	
	MPG = distance / gas;
	
	cout<<"Miles per gallon : " << MPG<<endl;
	
	
	return 0;
}
