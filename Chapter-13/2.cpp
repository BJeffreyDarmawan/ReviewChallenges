#include<iostream>

using namespace std;

class Employee
{
	private:
		string name;
		string department;
		string position;
		int idNumber;
	public:
		Employee(string name, int idNumber, string department, string position)
		{
			this->name = name;
			this->idNumber = idNumber;
			this->department = department;
			this->position = position;
		}
		Employee(string name, int idNumber)
		{
			this->name = name;
			this->idNumber = idNumber;
			this->department = "";
			this->position = "";
		}
		Employee()
		{
			this->name = "";
			this->idNumber = 0;
			this->department = "";
			this->position = "";
		}
		void setName(string name)
		{
			this->name = name;
		}
		void setID(int idNumber)
		{
			this->idNumber = idNumber;
		}
		void setDepartment(string department)
		{
			this->department = department;
		}
		void setPosition(string position)
		{
			this->position = position;
		}
		string getName()
		{
			return name;
		}
		int getID()
		{
			return idNumber;
		}
		string getDepartment()
		{
			return department;
		}
		string getPosition()
		{
			return position;
		}
};
