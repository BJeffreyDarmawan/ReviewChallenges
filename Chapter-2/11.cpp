#include<iostream>
using namespace std;
int main()
{
	float tank = 20;
	float perGallonTown = 23.5, perGallonHighway = 28.9;
	float distance = tank * perGallonHighway;
	float distance2 = tank * perGallonTown;
	
	cout<<"Distance per gallon in town "<<distance2<<endl;
	cout<<"Distance per gallon on highway "<<distance<<endl;
	
	return 0;	
}
