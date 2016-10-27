#include <iostream>

using namespace std;

class Numbers{
	private:
		int number;
		string lessThan20[20]={"zero", "one", "two", "three", "four", "five",
								"six", "seven", "eight", "nine", "ten",
								"eleven", "twelve", "thirteen", "fourteen", "fifteen",
								"sixteen", "seventeen", "eighteen", "nineteen"};
		string ones[10] = {"", "one", "two", "three", "four", "five",
								"six", "seven", "eight", "nine"};
		string tens[10] = {"", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
		string hundred = "hundred";
		string thousand = "thousand";
		string theNumber;
	public:
		Numbers()
		{
			this->number = 0;
		}
		Numbers(int number)
		{
			this->number = number;
		}
		void apaAja(int number)
		{
			if(number >= 0 && number <20)
			{
				cout << lessThan20[number];
			}
			else if (number >= 20 && number <=99)
			{
				cout << tens[number/10] << " " << ones[number%10];
			}
			else if (number >=100 && number <=999)
			{
				cout << ones[number/100] << " " << hundred << " ";
				if (number%100 >= 0 && number%100 < 20 )
				{
					if(number/10 == 0){}
					else
						cout << lessThan20[number%100];
				}
				else
				{
					cout << tens[number%100/10] << " " << ones[number%10];

				}
			}
			else if (number >= 1000 && number <=9999)
			{
				cout << ones[number/1000] << " " << thousand << " " << ones[number%1000/100] << " " << hundred << " ";
				if (number%100 >= 0 && number%100 < 20 )
				{
					if(number/10 == 0){}
					else
						cout << lessThan20[number%100];
				}
				else
				{
					cout << tens[number%100/10] << " " << ones[number%10];

				}
				
				
				
		//		 ones[number/100] << " " << hundred << tens[number/10] << " " << ones[number%10];
			}
			else
				cout << "Error! Only Accept 1-9999" << endl;
		
		}
		
								
};

int main()
{
	Numbers aNumber;
	int input;
	cout << "Input number: "; cin >> input;
	aNumber.apaAja(input);	
	
	return 0;
}
