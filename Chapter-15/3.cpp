#include<iostream>
using namespace std;

class Employee{
	protected:
		string empName;
		int empNumber;
		int empDate;
	public:
		Employee()
		{
			this->empName = "";
			this->empNumber = 0;
			this->empDate = 0;
		}
		Employee(string name, int number, int date)
		{
			this->empName = name;
			this->empNumber = number;
			this->empDate = date;
		}
		
		void setName(string name)
		{
			this->empName = name;
		}
		void setNumber(int number)
		{
			this->empNumber = number;
		}
		void setDate(int date)
		{
			this->empDate = date;
		}
		string getName()
		{
			return this->empName;
		}
		int getNumber()
		{
			return this->empNumber;
		}
		int getDate()
		{
			return this->empDate;
		}
};

class ProductionWorker: public Employee{
	protected:
		int shift;
		double payRate;
	public:
		ProductionWorker():Employee(){
			this->shift = 0;
			this->payRate = 0;
			
		}
		//name, number, date goes to Employee constructor
		ProductionWorker(string name, int number, int date, int shift, double payRate) : Employee(name, number, date)
		{
			this->shift = shift;
			this->payRate = payRate;
		}
		void setShift(int shift)
		{
			this->shift = shift;
		}
		void setPayRate(double payRate)
		{
			this->payRate = payRate;
		}
		int getShift()
		{
			return this->shift;
		}
		double getPayRate()
		{
			return this->payRate;
		}
};

class TeamLeader: public ProductionWorker{
	protected:
		double monBonus;
		int minTraining = 30;
		int attTraining;
	public:
		TeamLeader() : ProductionWorker(){
		}
		TeamLeader(string name, int number, int date, int shift, double pay, double monBonus, int attTraining) : ProductionWorker(name, number, date, shift, pay) 
		{
			this->monBonus = monBonus;
			this->attTraining = attTraining;
		}
		
		void setMonBonus(double bonus)
		{
			this->monBonus = bonus;
		}
		void setMinTraining(int minTraining)
		{
			this->minTraining = minTraining;
		}
		void setAttTraining(int attTraining)
		{
			this->attTraining = attTraining;
		}
		
		double getMonBonus()
		{
			return monBonus;
		}
		int getAttTraining()
		{
			return attTraining;
		}
		int getMinTrain()
		{
			return minTraining;
		}
		
		void print()
		{
			double bonusEarned;
			if(attTraining >= minTraining)
			{
				bonusEarned = monBonus;
			}
			else
				bonusEarned = 0;
			
			
			cout << "Name: " << empName << endl; //can access member variable from grandpa
			cout << "ID: " << empNumber << endl;
			cout << "Date hired: " << empDate << endl;
			cout << "Shift: " << shift << endl;
			cout << "Pay Rate: " << payRate << endl;
			cout << "Minimum training: " << minTraining << endl;
			cout << "Attended training hour: " << attTraining << endl;
			cout << "Monthly bonus earned: " << bonusEarned << endl;
		}
};

int main()
{
	TeamLeader jeff("Jeff", 33, 99, 2, 300, 99999, 12);
	jeff.print();
	
	
	
}
