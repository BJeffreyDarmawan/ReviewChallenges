#include<iostream>

using namespace std;

int main ()
{
	long double wave;
	
	cout << "Insert wave length: "; cin >> wave;
	
	if (wave > 0.01)
		cout << "It is radio waves" << endl;
	else if (wave <0.01 && wave > 0.001)
		cout << "It is microwaves" << endl;
	else if (wave < 0.001 && wave > 0.0000007)
		cout << "It is infrared" << endl;
	else if (wave < 0.0000007 && wave > 0.0000004)
		cout << "It is visible light" << endl;
	else if (wave < 0.0000004 && wave > 0.00000001)
		cout << "It is ultraviolet" << endl;
	else if (wave < 0.00000001 && wave > 0.00000000001)
		cout << "It is X Rays" << endl;
	else					
		cout << "It is gamma rays" << endl;
	
	return 0;
}
