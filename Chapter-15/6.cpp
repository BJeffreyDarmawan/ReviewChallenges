#include<iostream>

using namespace std;

class GradedActivity //copaste from book
{
	protected:
		double score; // To hold the numeric score
	public:
		// Default constructor
		GradedActivity()
			{ score = 0.0; }
		// Constructor
		GradedActivity(double s)
			{ score = s; }
		// Mutator function
		void setScore(double s)
			{ score = s; }

		// Accessor functions
		double getScore() const
			{ return score; }

		virtual char getLetterGrade() const{}
};


class Essay : public GradedActivity
{
	protected:
		int grammar, spelling, length, content;
		
	public:
		Essay (int grammar, int spelling, int length, int content) : GradedActivity()
		{
			this->grammar = grammar;
			this->spelling = spelling;
			this->length = length;
			this->content = content;
		}
		
		void calculate()
		{
			score = grammar + spelling + length + content;
		}
		
		
};

int main()
{
	Essay myEssay (20, 19, 17, 30);
	myEssay.calculate();
	cout << myEssay.getScore() << endl;
	
	
	return 0;
}
