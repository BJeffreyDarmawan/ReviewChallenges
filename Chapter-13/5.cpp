#include <iostream>

using namespace std;

class RetailItem
{
	private:
		string description;
		int unitsOnHand;
		double price;
	public:
		RetailItem(string description, int unitsOnHand, double price)
		{
			this->description = description;
			this->unitsOnHand = unitsOnHand;
			this->price = price;
		}
		void setDesc(string description)
		{
			this->description = description;
		}
		void setUnits(int unitsOnHand)
		{
			this->unitsOnHand = unitsOnHand;
		}
		void setPrice(double price)
		{
			this->price = price;
		}
		string getDesc()
		{
			return description;
		}
		int getUnits()
		{
			return unitsOnHand;
		}
		double getPrice()
		{
			return price;
		}
	
};



