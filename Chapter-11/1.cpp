#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct movieData{
	string year, time;
	char title[50], director[50];
};

movieData movieName[2];
//int x = 0;

void inputMovie(int);
void outputMovie(int);

int main()
{
	
	for (int i = 0; i < 2; i++)
	{
		inputMovie(i);
	}
	
	cout << "=======================================================================" << endl;
	cout << "-------Title -------- Director ------ Year Released ------ Running Time" << endl;
	
	
	for (int i = 0; i < 2; i++)
	{
		outputMovie(i);
	}
	
	
	
	return 0;
}

void inputMovie(int i)
{
	
	cout << "Insert movie title: "; cin.getline(movieName[i].title, 50);
	cout << "Insert movie director: "; cin.getline(movieName[i].director, 50);
	cout << "Insert movie year released: "; cin >> movieName[i].year;
	cout << "Insert movie running time: "; cin >> movieName[i].time;
	cout << endl;
	
}
void outputMovie(int i)
{
	cout << setw(11) << movieName[i].title << setw(17)
	<< movieName[i].director << setw(19)
	<< movieName[i].year << setw(19)
	<< movieName[i].time << endl;
}
