//
//I have a problem..
//
//... no such thing as no 7 no error...
//


#include<iostream>

using namespace std;

class TestScores{
	private:
		int score[];
		int sizeW;
	
	public:
		
		TestScores(int scores[])
		{
			int counter = 0;
    		while (scores[counter] != NULL)  
			{
        		counter++;
    		}
			
			for(int i = 0; i < counter; i++) 
			{
				this->score[i] = scores[i]; 	
			}
			
			this->sizeW = counter;
			//the error is that after assigning an integer, either the score or the size is also assigned with that integer..
		}
		
		class InvalidScore{
		};
		
		double aveScore()
		{
			double total=0;
			for(int i = 0; i < sizeW; i++)
			{
				total+=score[i];
			}
			double average = total / sizeW;
			return average;
		}
		
		void checkScores()
		{
			for(int i = 0; i < sizeW; i++)
			{
				cout << score[i] << " ";
				if(score[i] < 0 || score[i] > 100)
					{throw InvalidScore();}
				else{	}
		
			}
			
			
		}
};


int main()
{
	int sizeArr;
	
	cout << "How many scores to calculate? "; cin >> sizeArr;
	
	int testScores[sizeArr];
	
	for(int i = 0; i < sizeArr; i++)
	{
		cout << "Test score " << i+1 << ": "; cin >> testScores[i];
	}
	
	bool flag=true;
	
	/*
	try{
		TestScores myTestScore(testScores);//cant not define an object/instance inside try
	}
	catch(TestScores::InvalidScore)
	{
		cout << "Error!" << endl;
		flag = false;
	}
	
	if(flag)
		cout << "Average is: " << myTestScore.aveScore(); //an error says myTestScore was not declared.
		*/
		
	TestScores myTestScore(testScores);	
	
	try
	{
		myTestScore.checkScores();
		
	}
	catch(TestScores::InvalidScore)
	{
		cout << "Error!" << endl;
		flag = false;
	}
	
	if(flag)
		cout << "Average is: " << myTestScore.aveScore();
	else{
	}
		
	return 0;
}
