#include<iostream>

using namespace std;

class Car
{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		Car(int yearModel, string make)
		{
			this->yearModel = yearModel;
			this->make = make;
			this->speed = 0;
		}
		int getYear()
		{
			return yearModel;
		}
		string getMake()
		{
			return make;
		}
		int getSpeed()
		{
			return speed;
		}
		void accelerate()
		{
			this->speed+=5;
		}
		void brake()
		{
			this->speed-=5;
		}
};



int main()
{
	Car myCar(2013,"Yeee");
	
	for(int i = 0; i < 5; i++)
	{
		myCar.accelerate();
		cout << "Current speed: " << myCar.getSpeed() << endl;
	}
	
	for(int i = 0; i < 5; i++)
	{
		myCar.brake();
		cout << "Current speed: " << myCar.getSpeed() << endl;
	}
	
	return 0;
}
