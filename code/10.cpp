#include <iostream>
using namespace std;
class Mammal {
public:
	Mammal() :itsAge(1) {}
	virtual ~Mammal() {}
	virtual void Speak() const { cout << "Mammal talking!" << endl; }
protected:
	int itsAge;
};
class Dog : public Mammal {
public:
	void Speak() const { cout << " Woof wooff!" << endl; }

};
class Cat : public Mammal {
public:
	void Speak() const { cout << " Meow meow!" << endl; }

};
void ValueFunctioN(Mammal);
void PtrFunctioN(Mammal*);
void RefFunctioN(Mammal&);
int main() {
	Mammal* ptr = 0;
	int choice;
	while (1) {
		bool fQuit = false;
		cout << "(1) dog, (2) cat, 3(quit): ";
		cin >> choice;
		switch (choice) {
		case 3: fQuit = true;
			break;
		case 1: ptr = new Dog;
			break;
		case 2: ptr = new Cat;
			break;
		default: ptr = new Mammal;
			break;
		}
		if (fQuit == true)
			break;
		PtrFunctioN(ptr);
		ValueFunctioN(*ptr);
		RefFunctioN(*ptr);
	}
	return 0;
}
void ValueFunctioN(Mammal MammalValue) {
	MammalValue.Speak();
}
void PtrFunctioN(Mammal *MammalPointer) {
	MammalPointer->Speak();
}
void RefFunctioN(Mammal& MammalReference) {
	MammalReference.Speak();
}