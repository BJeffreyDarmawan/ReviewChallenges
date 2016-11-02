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

class Book{
	private:
		string name;
		Author author;
		double price;
		int qty = 0;
	public:
		Book(){
		}
		Book(string name, Author author, double price)
		{
			this->name = name;
			this->author = author;
			this->price = price;
		}
		Book(string name, Author author, double price, int qty)
		{
			this->name = name;
			this->author = author;
			this->price = price;
			this->qty = qty;
		}
		
		string getName()
		{
			return this->name;
		}
		Author getAuthor()
		{
			return author;
		}
		double getPrice()
		{
			return this->price;
		}
		int getQty()
		{
			return this->qty;
		}
		
		void setPrice(double price)
		{
			this->price = price;
		}
		void setQty(int qty)
		{
			this->qty = qty;
		}
		string toString()
		{
			string abc;
			abc = "Book [name = " + name + ", " + author.toString() + ", price = " + to_string(price)+ ", qty = " + to_string(qty) + "]";
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
		cout << "Male" << endl;
	}
	else
		cout << "Female" << endl;

	Book yesThisBook("Best Book Eva", thisBook, 50000);
	
	cout << yesThisBook.toString();
	
	
	return 0;
}
