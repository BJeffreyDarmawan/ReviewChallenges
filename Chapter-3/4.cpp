#include<iostream>
//#include<string>
using namespace std;

int main()
{
	string month1, month2, month3;
	int rain1, rain2, rain3;
	
	cout << "Please input amount of rain that fell each month" << endl << "<month> <space> <rain> <enter>" << endl;
	cin >> month1 >> rain1;
	cin >> month2 >> rain2;
	cin >> month3 >> rain3;

	int ave = (rain1 + rain2 + rain3) / 3;

	cout << "The average rainfall for " << month1 << ", " << month2 << ", " << month2 << " is " << ave;
	
	return 0;
}
