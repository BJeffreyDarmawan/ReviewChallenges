#include<iostream>
using namespace std;
int main()
{
	float shares = 750, stockPrice = 35, tipBroker = 0.02;
	float payStock, payCommission, payTotal;
	
	payStock = shares * stockPrice;
	payCommission = payStock * tipBroker;
	payTotal = payStock + payCommission;

	cout<<"Kathryn paid all the shares for : "<<payStock<<endl;
	cout<<"Kathryn paid the broker for : "<<payCommission<<endl;
	cout<<"Kathryn paid for total of : "<<payTotal<<endl;
	
	
	return 0;
}
