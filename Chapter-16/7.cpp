//
//I have a problem..
//

#include<iostream>

using namespace std;

class TestScores{
	private:
		int score[];
		int size=0;
	
	public:
		
		TestScores(int scores[])//the array passed can contain any number of elements, the size of the array is fixed at 8
		{
			int counter = 0;
    			while (scores[counter] != NULL) //the value after the last of an array's element is always 0/null 
				{
        			counter++;
    			}
			this->size = counter;
			
			cout << this->size << " "; // here is different than
			for(int i = 0; i < this->size; i++) //even if I changed this->size into counter, still error..
			{
				/* cant declare an object in try, so I made 'check' function
				if(score[i] < 0 || score[i] > 100)
					throw InvalidScore();
				else */	
					this->score[i] = scores[i]; 
					
			}
			cout << this->size; //here... only God knows why.. 
			//the first array element is assigned as size ...
			
		}
		
		class InvalidScore{
		};
		
		double aveScore()
		{
			double total=0;
			for(int i = 0; i < size; i++)
			{
				total+=score[i];
			}
			double average = total / size;
			return average;
		}
		
		void checkScores()
		{
			
			for(int i = 0; i < this->size; i++)
			{
				//cout << this->score[i] << " ";
				if(score[i] < 0 || score[i] > 100)
					{throw InvalidScore();}
		
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
