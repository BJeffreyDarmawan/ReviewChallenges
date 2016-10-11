#include<iostream>

using namespace std;

int main()
{
	float rise = 1.5;
	float year5=5, year7=7, year10=10;
	float oceanLevelRise5, oceanLevelRise7, oceanLevelRise10;
	
	oceanLevelRise5 = rise * year5;
	oceanLevelRise7 = rise * year7;
	oceanLevelRise10 = rise * year10;
	
	cout<<"In 5 years, the ocean level will rise by "<<oceanLevelRise5<<endl;
	cout<<"In 7 years, the ocean level will rise by "<<oceanLevelRise7<<endl;
	cout<<"In 10 years, the ocean level will rise by "<<oceanLevelRise10<<endl;
	
	return 0;
}
