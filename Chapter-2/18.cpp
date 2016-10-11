#include<iostream>
using namespace std;
int main()
{
	float cust = 16500, onePerWeek = 0.15, preferCitrus = 0.58;
	float whoOnePerWeek, whoPreferCitrus;
	
	whoOnePerWeek = cust * onePerWeek;
	whoPreferCitrus = cust * preferCitrus;
	
	cout<<"Those who purchase one or more per week : "<<whoOnePerWeek<<endl;
	cout<<"Those who prefer citrus flavoured : "<<whoPreferCitrus<<endl;
	
	return 0;
}
