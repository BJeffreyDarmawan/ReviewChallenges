#include<iostream>

using namespace std;

class DayOfTheYear{
	private:
		int day;
		string months[12] = {"January", "February", "March", "April", "May",
							"June", "July", "August", "September", "October",
							"November", "December"};
		int dayOfMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
	public:
		DayOfTheYear(int day){
			this->day = day;
		}
		void print()
		{
			int i = 0, j = 0;
			int temp = this->day;
			while(temp >= 0)
			{
				if(temp > dayOfMonths[i])
				{
					temp -= dayOfMonths[i];
				}
				else
				{
					j = i; //j stores the latest value of i before being added below					
					break;
				}
				i++;
			}
			cout << "Day " << this->day << " would be " << months[j] << " " << temp << endl;
			
		}
		
};

int main()
{
	DayOfTheYear day1(365), day2(200), day3(145);
	day1.print();
	day2.print();
	day3.print();
	
	return 0;
}
