#include <iostream>
#include <vector>
#include <string>



using namespace std;

class animal {
public:
	animal() {};
	virtual void setSpecies(string species){ MySpecies = species; };
	animal(string gender, string species) {}; //:MyGender(gender), MySpecies(species) {};
	virtual ~animal() { cout << "a " << MyGender << " " << MySpecies << " has died." << endl; };

	virtual void getGender() { cout<<MyGender<<endl; };


protected:
	string MyGender;
	string MySpecies;
	
};

class dog : protected animal{
public:

	dog::dog(string gender) { MySpecies = "dog"; MyGender = gender; };
	dog::~dog() {  };

	void setSpecies(string species) override { MySpecies = "dog"; };
	void getadr(dog* dogi) { cout << dogi << endl; }
	void getGender() { animal::getGender(); };
};

void main(void)
{
	
	vector<dog> dogs;

	dog *dogi = new dog("female");
	dogs.push_back(*dogi);
	dogi->getGender();
	cout << dogi << "\n" << &dogi << endl;

	int kaksi = 2;
	int *intti = &kaksi;
	cout << "kaksi osoite on: " << &kaksi << endl << intti << endl << *intti << endl << &intti << endl;

	cout << "size of &intti: " << sizeof(&intti) << "\n" << sizeof(&kaksi) << endl;

	dog *DOG = new dog("male");

	DOG->getGender();

	delete DOG, dogi;
	
	system("PAUSE");

}
