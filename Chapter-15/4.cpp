#include<iostream>

using namespace std;

//copaste from book for Time.h
class Time
{
	protected:
		int hour;
		int min;
		int sec;
	public:
		// Default constructor
		Time()
			{ hour = 0; min = 0; sec = 0; }

		// Constructor
		Time(int h, int m, int s)
			{ hour = h; min = m; sec = s; }

		// Accessor functions
		int getHour() const
			{ return hour; }

		int getMin() const
			{ return min; }

		int getSec() const
			{ return sec; }
};

class MilTime: public Time{
	protected:
		int milHours;
		int milSeconds;
		
	public:
		MilTime(){
			milHours = 0;
			milSeconds = 0;
		}
		
		MilTime(int milHours, int milSeconds)
		{
			if(milHours > 2359)
			{
				exit(0);
			}
			else
				this->milHours = milHours;
			
			if(milSeconds > 59 && milSeconds < 0)
			{
				exit(0);
			}
			else
				this->milSeconds = milSeconds;
			
			//assign hour min sec in Time class	
			hour = this->milHours / 100;
			min = this->milHours % 100;
			sec = this->milSeconds;
		}
		
		void setTime(int hours, int seconds)
		{
			this->milHours = hours;
			this->milSeconds = seconds;
		}
		
		void printSt()
		{
			
			string amPM;
			
			if(hour > 12)
			{
				hour-=12;
				amPM = "pm";
			}
			else
				amPM = "am";
			
			cout << "It is " << hour << "." << min << amPM << " and " << sec << " seconds" << endl;			
		}
		
		void printMil()
		{
			int milVersionHour = this->milHours / 100;
			cout << "It is " << milVersionHour << "." << min << " and " << sec << " seconds" << endl;
		}
		
		
		string getHour()
		{
			int milVersionHour = this->milHours / 100;
			string abc = to_string(milVersionHour) + "." + to_string(min) + " and " + to_string(sec) + " seconds \n";
			return abc;
		}
		string  getStandHr()
		{
			string amPM;
			if(hour > 12)
			{
				hour-=12;
				amPM = "pm";
			}
			else
				amPM = "am";
				
			string abc = to_string(hour) + "." + to_string(min) + amPM + " and " + to_string(sec) + " seconds \n";
			return abc;
		}
};

int main()
{
	MilTime time1(2231, 43);
	time1.printSt();
	time1.printMil();
	cout << time1.getHour();
	cout << time1.getStandHr();
	
	return 0;
}
