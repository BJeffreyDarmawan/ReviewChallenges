#include<iostream>

using namespace std;

class Employee{
	private:
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
		ProductionWorker(string name, int number, int date, int shift, double payRate) : Employee(name, date, shift)
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


int main()
{
	int id, date, shift;
	string name;
	double pay;
	
	cout << "Name: "; cin >> name;
	cout << "ID Number: "; cin >> id;
	cout << "Date Hired: "; cin >> date;
	cout << "Shift (1 day / 2 night): "; cin >> shift;
	cout << "Pay Rate: "; cin >> pay;
	
	ProductionWorker emplo1(name, id, date, shift, pay); 
	
	cout << "========================================" << endl;
	cout << "Name: " << emplo1.getName() << endl; //getName is inherited from Employee class
	cout << "ID: " << emplo1.getNumber() << endl; // getNumber too
	cout << "Hire Date: " << emplo1.getDate() << endl; //also getDate
	
	if(emplo1.getShift() == 1)
	{
		cout << "Shift: Day" << endl;
	}
	else if(emplo1.getShift() == 2)
	{
		cout << "Shift: Night" << endl;
	}
	
	cout << "Pay Rate: " << emplo1.getPayRate() << endl;
	
	
	return 0;
}
