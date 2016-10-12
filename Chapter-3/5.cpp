#include<iostream>

using namespace std;

int main()
{
	/*"Suppose there are " << nBoy << " males and " << nGirl << " females in a class." << endl << 
	"There are " << total << " students in the class. The percentage of males can be calculated as " << nBoy << " ÷ " << total << " = " << percentageDec <<
	, or " << percentagePercent <<"%. The percentage of females can be calculated as " << nGirl << " ÷ " << " = " << percentageDecGirl << ", or " << percentagePercentGirl <<"%"*/
	
	float  nBoy, nGirl;
	
	cout << "Please input number of boys : "; cin >> nBoy;
	cout << "Please input number of girls : "; cin >> nGirl;

	int total = nBoy + nGirl;
	
	float percentageDecBoy = nBoy / total;
	float percentagePercentBoy = percentageDecBoy * 100;
	float percentageDecGirl = nGirl / total;
	float percentagePercentGirl = percentageDecGirl * 100;
	
	cout << "Suppose there are " << nBoy << " males and " << nGirl << " females in a class." << endl << 
	"There are " << total << " students in the class." << endl << " The percentage of males can be calculated as " << nBoy << " / " << total << " = " << percentageDecBoy << ", or " << percentagePercentBoy << "%" << endl <<
	"The percentage of females can be calculated as " << nGirl << " / " << total << " = " << percentageDecGirl << ", or " << percentagePercentGirl <<"%";
	
	
	return 0;
}
