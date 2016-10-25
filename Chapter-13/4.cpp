#include<iostream>

using namespace std;

class Personal
{
	private:
		string name;
		string address;
		int age;
		int phone;
	public:
		Personal(string name, string address, int age, int phone)
		{
			this->name = name;
			this->address = address;
			this->age = age;
			this->phone=phone;
		}
		string getName()
		{
			return name;
		}
		string getAddress()
		{
			return address;
		}
		int getAge()
		{
			return age;
		}
		int getPhone()
		{
			return phone;
		}
		void setName (string name)
		{
			this->name = name;
		}
		void setAddress(string address)
		{
			this->address = address;
		}
		void setAge(int age)
		{
			this->age = age;
		}
		void setPhone(int phone)
		{
			this->phone = phone;
		}
		
	
};

int main()
{
	Personal person1("Jeff", "Puri", 18, 08781239081);
	Personal person2("Friend1", "Jakarta", 18, 08129371223);
	Personal person3("Friend2", "Jakarta", 18, 08123871294);
	
	
	
	return 0;
}
