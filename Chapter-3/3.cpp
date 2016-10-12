#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int score1, score2, score3, score4, score5;
	int ave;
	
	cout << "Insert score 1 : "; cin >> score1;
	cout << "Insert score 2 : "; cin >> score2;
	cout << "Insert score 3 : "; cin >> score3;
	cout << "Insert score 4 : "; cin >> score4;
	cout << "Insert score 5 : "; cin >> score5;
	
	ave = (score1 + score2 + score3 + score4 + score5) / 5;
	cout << "Average score is : " << ave;
	
	return 0;
}
