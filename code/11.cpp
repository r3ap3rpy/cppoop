#include <iostream>
using namespace std;
class Mammal {
public:
	Mammal() :itsAge(1) { cout << "Mammal constructor" << endl; }
	virtual ~Mammal() { cout << "The mammal destructed" << endl; }
	Mammal(const Mammal & rhs);
	virtual void Speak() const { cout << "The mammal speaking!" << endl; }
	virtual Mammal* Clone() { return new Mammal(*this); }
	int GetAge() const { return itsAge; }
protected:
	int itsAge;
};
Mammal::Mammal(const Mammal& rhs) :itsAge(rhs.GetAge()) {
	cout << "This is the mammal copy constructor!" << endl;
}

class Dog : public Mammal 
{
public:
	Dog():itsAge(2) { cout << "Dog constructor" << endl; }
	virtual ~Dog() { cout << "The Dog destructed" << endl; }
	Dog(const Dog& rhs);
	virtual void Speak() const { cout << "Woof!" << endl; }
	virtual Mammal* Clone() { return new Dog(*this); }
	
protected:
	int itsAge;
};
Dog::Dog(const Dog& rhs):
Mammal(rhs),
itsAge(2) {
	cout << "This is the dog copy constructor!" << endl;
}
class Cat : public Mammal {
public:
	Cat():itsAge(3) { cout << "Cat constructor" << endl; }
	virtual ~Cat() { cout << "The Cat destructed" << endl; }
	Cat(const Cat& rhs);
	virtual void Speak() const { cout << "Meow!" << endl; }
	virtual Mammal* Clone() { return new Cat(*this); }

protected:
	int itsAge;
};
Cat::Cat(const Cat& rhs) :
	Mammal(rhs),
itsAge(3) {
	cout << "This is the Cat copy constructor!" << endl;
}
enum ANIMALS {MAMMAL, DOG, CAT};
const int NumAnimalTypes(3);
int main() {
	Mammal* theArray[NumAnimalTypes];
	Mammal* ptr=0;
	int choice, i;
	for (i = 0; i < NumAnimalTypes; i++) {
		cout << "1 Dog, 2, Cat, 3 Mammal:";
		cin >> choice;
		switch (choice) {
		case DOG: ptr = new Dog;
			break;
		case MAMMAL: ptr = new Mammal;
			break;
		case CAT: ptr = new Cat;
			break;
		}
		theArray[i] = ptr;
	}
	Mammal* OtherArray[NumAnimalTypes];
	for (i = 0; i < NumAnimalTypes; i++) {
		theArray[i]->Speak();
		OtherArray[i] = theArray[i]->Clone();
	}
	for (i = 0; i < NumAnimalTypes; i++) {
		theArray[i]->Speak();
		OtherArray[i]->Speak();
	}

}
