#include<iostream>

using namespace std;

int main()
{
	float item1, item2, item3, item4, item5;
	float sum, totalTax, totalTotal, tax = 0.07;
	item1 = 15.95;
	item2 = 24.95;
	item3 = 6.95;
	item4 = 12.95;
	item5 = 3.95;
	sum = item1 + item2 + item3 + item4 + item5;
	totalTax = sum * tax;
	totalTotal = sum + totalTax;
	
	cout<<"Item 1 : "<<item1<<endl;
	cout<<"Item 2 : "<<item2<<endl;
	cout<<"Item 3 : "<<item3<<endl;
	cout<<"Item 4 : "<<item4<<endl;
	cout<<"Item 5 : "<<item5<<endl;
	cout<<endl;
	cout<<"Subtotal : "<<sum<<endl;
	cout<<"Tax : "<<totalTax<<endl;
	cout<<"Total : "<<totalTotal<<endl;
	
	return 0;
}
