#include "2.cpp"

int main()
{
	Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
	Employee emp2("Mark Jones", 39119, "IT", "Programmer");
	Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");
	
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "Name \t\tID Number \tDepartment \t\tPosition" << endl; 
	cout << "----------------------------------------------------------------------------" << endl;
	cout << emp1.getName() << "\t" << emp1.getID() << "\t\t" << emp1.getDepartment() << "\t\t" << emp1.getPosition() << endl;
	cout << emp2.getName() << "\t" << emp2.getID() << "\t\t" << emp2.getDepartment() << "\t\t\t" << emp2.getPosition() << endl;
	cout << emp3.getName() << "\t" << emp3.getID() << "\t\t" << emp3.getDepartment() << "\t\t" << emp3.getPosition() << endl;
	
	
}
