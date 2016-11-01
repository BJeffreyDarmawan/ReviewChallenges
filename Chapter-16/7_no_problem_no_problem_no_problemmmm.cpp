//
//the problem only appear when I have an array member variable..
//


#include<iostream>

using namespace std;

class TestScores{
	private:
		double total=0;
		int sizeW;
	
	public:
		
		TestScores(int scores[], int size)
		{
			this->sizeW=size;
			for(int i = 0; i < sizeW; i++) 
			{
				if(scores[i] < 0 || scores[i] > 100)
					{throw InvalidScore();}
				else{	
				
				this->total+= scores[i]; }	
			}
		
		}
		
		class InvalidScore{
		};
		
		double aveScore()
		{
			double average = total / sizeW;
			return average;
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
	
	try
	{
		TestScores myTestScore(testScores,sizeArr);
		cout << "Average is: " << myTestScore.aveScore();
	}
	catch(TestScores::InvalidScore)
	{
		cout << "Error!" << endl;
		flag = false;
	}
	
		
	return 0;
}
