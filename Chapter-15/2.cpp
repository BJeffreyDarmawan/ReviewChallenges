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




class ShiftSupervisor : public Employee{
	protected:
		double annSalary;
		double annBonus;
	public:
		ShiftSupervisor():Employee(){
			this->annSalary = 0;
			this->annBonus = 0;
		}
		ShiftSupervisor(string name, int id, int date, double annSalary, double annBonus) : Employee(name,id,date)
		{
			this->annSalary = annSalary;
			this->annBonus = annBonus;
		}
		
		void setSalary(double salary)
		{
			this->annSalary = salary;
		}
		void setBonus(double bonus)
		{
			this->annBonus = bonus;
		}
		double getSalary()
		{
			return this->annSalary;
		}
		double getBonus()
		{
			return this->annBonus;
		}
};

int main()
{
	ShiftSupervisor sup1("Jeff", 200189123, 2030, 900000, 100000);
	
	cout << sup1.getName() << endl;
	cout << sup1.getNumber() << endl;
	cout << sup1.getDate() << endl;
	cout << sup1.getSalary() << endl;
	cout << sup1.getBonus() << endl;
	
	
	
	return 0;
}
