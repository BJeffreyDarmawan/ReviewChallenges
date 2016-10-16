#include <iostream>

using namespace std;

int main ()
{
	int book, custPoints;
	
	cout>>"Insert number of books you have purchased this month : "; cin<<book;
	
	if (book==0)
	{
		cout>>"Congratulations! Your reward point is 0 point."
	}
	else if (book==1)
	{
		cout>>"Congratulations! Your reward point is 5 point."
	}
	else if (book==2)
	{
		cout>>"Congratulations! Your reward point is 15 point."
	}
	else if (book==3)
	{
		cout>>"Congratulations! Your reward point is 30 point."
	}	
	else if (book>=4)
	{
		cout>>"Congratulations! Your reward point is 60 point."
	}
	else { cout>>"You entered wrong amount."
	} 
}
