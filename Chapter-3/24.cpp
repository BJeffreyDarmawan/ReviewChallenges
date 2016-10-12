#include <iostream>
//#include<cstring>
using namespace std;

int main()
{
	string name, age, city, coll, prof, animal, pet;
	cout << "Your Name : "; cin >> name;
	cout << "Your Age : "; cin >> age;
	cout << "City : "; cin >> city;
	cout << "College : "; cin >> coll;
	cout << "Profession : "; cin >> prof;
	cout << "Animal : "; cin >> animal;
	cout << "Pet's Name : "; cin >> pet;
	//char petname[] = animal;
	
	cout << "=====================================" << endl << endl;
	
	cout << "There once was a person named " << name << " who lived in " << city << ". " << endl <<
	"At the age of " << age << ", " << name << " went to college at " << coll << ". " << endl << 
	name << " graduated and went to work as a " << prof << ". Then, " << name <<" adopted a " <<
	animal << " named " << pet <<". They lived happily ever after!" << endl;
	
	//if (petname [0] == 'a' || petname [0] == 'i' || petname [0] == 'e' || petname [0] == 'u' || petname [0] == 'o')
	//cout << "n ";
	//else cout << " ";
	
	//cout << animal << " named " << pet <<". They lived happily ever after!" << endl;
	
	
	return 0;
	
}
