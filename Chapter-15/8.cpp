#include<iostream>

using namespace std;

class PersonData{
	protected:
		string lastName;
		string firstName;
		string address;
		string city;
		string state;
		string zip;
		string phone;
	
	public:
		PersonData(){
			
		}
		PersonData(string lastName, string firstName, string address, string city, string state, string zip, string phone)
		{
			this->lastName = lastName;
			this->firstName = firstName;
			this->address = address;
			this->city = city;
			this->state = state;
			this->zip = zip;
			this->phone = phone;
		}
		
		void setLastName(string lastName)
		{
			this->lastName = lastName;
		}
		void setFirstName(string firstName)
		{
			this->firstName = firstName;
		}
		void setAddress(string address)
		{
			this->address = address;
		}
		void setCity(string city)
		{
			this->city = city;
		}
		void setState(string state)
		{
			this->state = state;
		}
		void setZip(string zip)
		{
			this->zip = zip;
		}
		void setPhone(string phone)
		{
			this->phone = phone;
		}
		
		string getLastName()
		{
			return this->lastName;
		}
		string getFirstName()
		{
			return this->firstName;
		}
		string getAddress()
		{
			return this->address;
		}
		string getCity()
		{
			return this->city;
		}
		string getState()
		{
			return this->state;
		}
		string getZip()
		{
			return this->zip;
		}
		string getPhone()
		{
			return this->phone;
		}
		
};


class CustomerData:public PersonData{
	protected:
		int customerNumber;
		bool mailingList;
	public:
		CustomerData():PersonData()
		{
			customerNumber = 0;
			mailingList = 0;
		}
		CustomerData(string lastName, string firstName, string address, string city, string state, string zip, string phone, int custNum, bool mailList):PersonData(lastName, firstName, address, city, state, zip, phone)
		{
			this->customerNumber = custNum;
			this->mailingList = mailList;
		}
		
		void setNum()
		{
			int num;
			cout << "Set customer Number: "; cin >> num;
			this->customerNumber = num;
		}
		void setMailList()
		{
			string opt;
			cout << "Do you want to be on mailing list? "; cin >> opt;
			
			if(opt == "yes" || opt == "Yes" || opt == "y" || opt == "Y")
				mailingList = true;
			else
				mailingList = false;
		}
		int getCustNum()
		{
			return this->customerNumber;
		}
		string getMailList()
		{
			string abc;
			if(this->mailingList)
				abc = "Yes";
			else 
				abc = "No";
			
			return abc;
		}
	
};

class PreferredCustomer:public CustomerData{
	protected:
		double purchasesAmount;
		double discountLevel;
		
	public:
		PreferredCustomer():CustomerData()
		{	}
		PreferredCustomer(double amount)
		{
			this->purchasesAmount = amount;
			if(amount >= 2000)
				this->discountLevel = 0.1;
			else if (amount >= 1500)
				this->discountLevel = 0.07;
			else if (amount >= 1000)
				this->discountLevel = 0.06;
			else if (amount >= 500)
				this->discountLevel = 0.05;
			else 
				this->discountLevel = 0;
		}
		PreferredCustomer(string lastName, string firstName, string address, string city, string state, string zip, string phone, int custNum, bool mailList, double amount):CustomerData(lastName, firstName, address, city, state, zip, phone, custNum, mailList)
		{
			this->purchasesAmount = amount;
			if(amount >= 2000)
				this->discountLevel = 0.1;
			else if (amount >= 1500)
				this->discountLevel = 0.07;
			else if (amount >= 1000)
				this->discountLevel = 0.06;
			else if (amount >= 500)
				this->discountLevel = 0.05;
			else 
				this->discountLevel = 0;
		}
		
		void setAmount(double amount)
		{
			this->purchasesAmount = amount;
			
			if(amount >= 2000)
				this->discountLevel = 0.1;
			else if (amount >= 1500)
				this->discountLevel = 0.07;
			else if (amount >= 1000)
				this->discountLevel = 0.06;
			else if (amount >= 500)
				this->discountLevel = 0.05;
			else 
				this->discountLevel = 0;
		}
		
		double getAmount()
		{ return this->purchasesAmount;	}
		double getDisc()
		{return this->discountLevel;	}
		
};

int main()
{
	
	PreferredCustomer data1("Jeff", "Bern", "Puri", "Jakarta", "Barat", "11023", "08123784713", 91023, 1, 1490);
	
	cout << data1.getLastName() << endl;
	cout << data1.getAddress() << endl;
	cout << data1.getCustNum() << endl;
	cout << data1.getMailList() << endl;
	
	cout << data1.getDisc() * 100 << "%" << endl;
	cout << data1.getAmount() << endl;
	
	
	
	return 0;
}
