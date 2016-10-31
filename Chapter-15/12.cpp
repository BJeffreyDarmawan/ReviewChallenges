#include<iostream>

using namespace std;

class Ship{
	protected:
		string nameShip;
		string yearShip;
		
	public:
		Ship(string nameShip)
		{
			this->nameShip = nameShip;
		}
		Ship(string nameShip, string yearShip)
		{
			this->nameShip = nameShip;
			this->yearShip = yearShip;
		}
		
		void setName(string name)
		{
			this->nameShip = name;
		}
		void setYear(string year)
		{
			this->yearShip = year;
		}
		
		string getName()
		{
			return this->nameShip;
		}
		string getYear()
		{
			return this->yearShip;
		}
		
		virtual void print()
		{
			cout << "Name: " << nameShip << endl;
			cout << "Year built: " << yearShip << endl;
		}

};

class CruiseShip:public Ship{
	protected:
		int maxPass;
		
	public:
		CruiseShip(string name, int maxPass) : Ship(name)
		{
			this->maxPass = maxPass;
		}
		
		virtual void print()
		{
			cout << "Name: " << nameShip << endl;
			cout << "Maximum passenger: " << maxPass << endl;
		}
	
};



class CargoShip:public Ship{
	protected:
		int maxCargo;
		
	public:
		CargoShip(string name, int maxCargo) : Ship(name)
		{
			this->maxCargo = maxCargo;
		}
		
		virtual void print()
		{
			cout << "Name: " << nameShip << endl;
			cout << "Cargo cap.: " << maxCargo << endl;
		}
};

int main()
{
	//i dont know what I have to do in main..
	//Ship* A[] = new Ship[]; ?
	
	
	return 0;
}
