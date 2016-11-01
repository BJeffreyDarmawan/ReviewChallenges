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
		
		void setHour(int hour){
			if(hour < 0 || hour > 2359)
			{
				throw BadHour();
			}
			else{
				this->milHours = hour;}
				//cout << this->milHours;
		}
		void setSecond(int second){
			if(second < 0 || second > 59)
			{
				throw BadSeconds();
			}
			else{
				this->milSeconds = second;}
				//cout << this->milSeconds;
		}
		
		void printMil()
		{
			int milVersionHour = this->milHours / 100;
			cout << "It is " << milVersionHour << "." << min << " and " << sec << " seconds" << endl;
		}
		
		
		string getHours()
		{
			hour = this->milHours / 100;
			min = this->milHours % 100;
			sec = this->milSeconds;
			int milVersionHour = this->milHours / 100;
			string abc = to_string(milVersionHour) + ".";
			if(min < 10)
			{
				abc+= "0" + to_string(min);
			}
			else{
				abc+= to_string(min);
			}
			
			abc+= " and " + to_string(sec) + " seconds \n";
			return abc;
		}
		string  getStandHr()
		{
			hour = this->milHours / 100;
			min = this->milHours % 100;
			sec = this->milSeconds;
			string amPM;
			if(hour > 12)
			{
				hour-=12;
				amPM = "pm";
			}
			else
				amPM = "am";
				
			string abc = to_string(hour) + ".";
			if(min < 10)
			{
				abc+= "0" + to_string(min);
			}
			else{
				abc+= to_string(min);
			}
			
			abc+= " and " + to_string(sec) + " seconds \n";
			return abc;
		}
		
		class BadHour{	};
		class BadSeconds{	};
		
		
};

int main()
{
	MilTime time1(2231, 43);
	time1.printSt();
	time1.printMil();
	cout << time1.getHours();
	cout << time1.getStandHr();
	
	bool a = true;
	try{
		int a;
		cout << "Insert hour: "; cin >> a;
		time1.setHour(a);
		cout << "Insert seconds: "; cin >> a;
		time1.setSecond(a);
	}
	catch(MilTime::BadHour)
	{
		cout << "Invalid Hour!" << endl;
		a = false;
	}
	catch(MilTime::BadSeconds)
	{
		cout << "Invalid Seconds!" << endl;
		a = false;
	}
	
	if(a){
		cout << time1.getHours();
		cout << time1.getStandHr();
	}
	
	
	return 0;
}
