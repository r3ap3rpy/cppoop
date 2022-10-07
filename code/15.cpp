#include <iostream>
using namespace std;
enum BREED {GOLDEN, PUG, BERNEESE};
class Mammal {
public:
	Mammal() { cout << "Mammal construct!" << endl; }
	~Mammal() { cout << "Mammal destruct!" << endl; }
	void Speak() const { cout << "Mammal speaks!" << endl; }
	void Sleep() const { cout << "Mammal is sleeping!" << endl; }
protected:
	int itsAge;
	int itsWeight;
};
class Dog : public Mammal {
public:
	Dog() { cout << "Dog construct!" << endl; }
	~Dog() { cout << "Dog destruct!" << endl; }
	void WagTail() const { cout << "Tail is wagging!" << endl; }
	void BegForFood() const { cout << "Dog is hungry !" << endl; }
	void Sleep() const { cout << "Dog is sleeping!" << endl; }
private:
	BREED itsBreed;
};
int main()
{
	Mammal bigAnimal;
	Dog Szuki;
	bigAnimal.Speak();
	Szuki.Speak();
   
}
