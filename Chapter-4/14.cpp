#include<iostream>

using namespace std;

int main ()
{
	float bal, nCheck, fee, charge = 0, feeCheck = 10;
	cout << "Enter balance: "; cin >> bal;
	cout << "Enter checks written: "; cin >> nCheck;
	
	if (bal < 0)
		cout << "Your account is overdrawn";
	
	if (bal < 400)
		charge = 15;	
	
	if (nCheck < 20)
		feeCheck = feeCheck + nCheck * 0.10;
	else if (nCheck >= 20 && nCheck <= 39)	
		feeCheck = feeCheck + nCheck * 0.08;
	else if (nCheck >= 40 && nCheck <= 59)
		feeCheck = feeCheck + nCheck * 0.06;
	else if (nCheck >= 60)
		feeCheck = feeCheck + nCheck * 0.04;
	else
		cout << "Please give a serious input!" << endl;
		
		
	
	fee = charge + feeCheck;
	cout << "Bank service fee this month: " << fee;
	
	return 0;
}
