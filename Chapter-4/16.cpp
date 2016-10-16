#include <iostream>

using namespace std;

int main()
{
	string runner1, runner2, runner3;
	int second1, second2, second3;
	
	cout<<"Insert Runner 1 name : "; cin>>runner1;
	cout<<"Insert Runner 2 name : "; cin>>runner2;
	cout<<"Insert Runner 3 name : "; cin>>runner3;
	
	cout<<"Runners time record (in seconds)"<<endl;
	cout<<"Insert Runner 1 time : "; cin>>second1;
	cout<<"Insert Runner 2 time : "; cin>>second2;
	cout<<"Insert Runner 3 time : "; cin>>second3;
	
	if(second1 < 0 || second2 < 0 || second3 < 0)
	{
		cout << "Only possitive record please" << endl;
	}
	else
	{
	
		if(second1<second2)
		{
			if(second2<second3)
			{
				cout<<"Congratulations! "<<runner1<<", you are the first place!"<<endl;
				cout<<"Congratulations! "<<runner2<<", you are the second place!"<<endl;
				cout<<"Congratulations! "<<runner3<<", you are the third place!"<<endl;
			}
			else 
			{
				cout<<"Congratulations! "<<runner3<<", you are the first place!"<<endl;
				cout<<"Congratulations! "<<runner1<<", you are the second place!"<<endl;
				cout<<"Congratulations! "<<runner2<<", you are the third place!"<<endl;	
			}
		
		}
		else if (second1<second3)
		{
			if(second3<second2)
			{
				cout<<"Congratulations! "<<runner1<<", you are the first place!"<<endl;
				cout<<"Congratulations! "<<runner3<<", you are the second place!"<<endl;
				cout<<"Congratulations! "<<runner2<<", you are the third place!"<<endl;	
			}
			else 
			{
				cout<<"Congratulations! "<<runner2<<", you are the first place!"<<endl;
				cout<<"Congratulations! "<<runner1<<", you are the second place!"<<endl;
				cout<<"Congratulations! "<<runner3<<", you are the third place!"<<endl;	
			}
		}
		else if (second2<second1)
		{
			if(second1<second3)
			{
				cout<<"Congratulations! "<<runner2<<", you are the first place!"<<endl;
				cout<<"Congratulations! "<<runner1<<", you are the second place!"<<endl;
				cout<<"Congratulations! "<<runner3<<", you are the third place!"<<endl;	
			}
			else 
			{
				cout<<"Congratulations! "<<runner3<<", you are the first place!"<<endl;
				cout<<"Congratulations! "<<runner2<<", you are the second place!"<<endl;
				cout<<"Congratulations! "<<runner1<<", you are the third place!"<<endl;	
			}
		}
		else
		{
			cout<<"You inserted wrong time record.";
		}
	}
}
