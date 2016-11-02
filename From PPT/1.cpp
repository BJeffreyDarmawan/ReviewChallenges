#include<iostream>

using namespace std;

class Author{
	private:
		string name;
		string email;
		char gender;
	public:
		Author(){
		}
		Author(string name, string email, char gender){
			this->name = name;
			this->email = email;
			this->gender = gender;
		}
		string getName()
		{
			return name;
		}
		string getEmail()
		{
			return email;
		}
		
		void setEmail(string email)
		{
			this->email = email;
		}
		
		char getGender()
		{
			return gender;
		}
		string toString()
		{
			string abc;
			abc = "Author [ name = " + name + ", email = " + email + ", gender = " + gender + "]";
			return abc;
		}	
};

int main()
{
	Author thisBook("Jeff", "jeff@blabla.com", 'M');
	cout << thisBook.getEmail();
	
	
	thisBook.setEmail("jeffrey@blabla.com"); cout << endl;
	cout << "Name: " << thisBook.getName() << endl;	
	cout << "Email: " << thisBook.getEmail() << endl;
	cout << "Gender: ";
	
	if(thisBook.getGender() == 'm' || thisBook.getGender() == 'M')//<< endl;
	{
		cout << "Male";
	}
	else
		cout << "Female";

	
	
	
	return 0;
}
