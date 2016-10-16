#include<iostream>

using namespace std;

int main ()
{
	int temp;
	cout << "Insert temperature: "; cin >> temp;
	
	int fpEA = -173, fpMercu = -38, fpOx = -362, fpWater = 32;
	int bpEA = 172, bpMercu = 676, bpOx = -306, bpWater = 212;
	
	if(temp <= fpEA) cout<< "Ethyl alcohol will freeze" << endl;
	if(temp <= fpMercu) cout << "Mercury will freeze" << endl;
	if(temp <= fpOx) cout << "Oxygen will freeze" << endl;
	if(temp <= fpWater) cout << "Water will freeze" << endl;
	
	if(temp >= bpEA) cout << "Ethyl alcohol will boil" << endl;
	if(temp >= bpMercu) cout << "Mercury will boil" << endl;
	if(temp >= bpOx) cout << "Oxygen will boil" << endl;
	if(temp >= bpWater) cout << "Water will boil" << endl;
	
	
	return 0;
}
