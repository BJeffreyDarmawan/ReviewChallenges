#include<iostream>

using namespace std;

int main ()
{
	float sec, min, hour, day;
	
	cout << "Enter number of seconds: "; cin >> sec;
	
	min = sec / 60;
	hour = sec / 3600;
	day = sec / 86400;
	
	if (min >= 1)
		cout << "There are " << min << " minutes from that number of seconds " << endl;
	
	if (hour >= 1)
		cout << "There are " << hour << " hours from that number of seconds " << endl;
	
	if (day >= 1)
		cout << "There are " << day << " days from that number of seconds " << endl;
		
	return 0;
}
