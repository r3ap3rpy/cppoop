#include <iostream>
using namespace std;
class Mammal {
public:
    Mammal() :itsAge(1) { cout << "Mammal constructed!" << endl; }
    virtual ~Mammal() { cout << "Mammal destructed!" << endl; }
    void Move() const { cout << "Mammal is moving!" << endl; }
    virtual void Speak() const { cout << "Mammal is speaking!" << endl; }
protected:
    int itsAge;
};
/*class Dog : public Mammal {
public:
    Dog() { cout << "The dog was constructed!" << endl; }
    virtual ~Dog() { cout << "The dog was destructed!" << endl; }
    void WagTaiL() { cout << "Tail is wagging!" << endl; }
    void Speak() const { cout << "Dog is speaking!" << endl; }
    void Move() const { cout << "Dog is moving!" << endl; }
};*/
class Dog : public Mammal {
public:
    void Speak() const { cout << "Woof" << endl; }

};
class Cat : public Mammal {
public:
    void Speak() const { cout << "Meow!" << endl; }

};
class Horse : public Mammal {
public:
    void Speak() const { cout << "Nyihaha!" << endl; }

};
class Pig : public Mammal {
public:
    void Speak() const { cout << "Oink!" << endl; }

};
int main()
{
  //polymorphism
    // Mammal * pMammal = new Dog;
    //Mammal* pDog = new Dog;
    //pDog->Move();
    //pDog->Speak();
    Mammal* theArray[5];
    Mammal* ptr;
    int choice, i;
    for (i = 0; i < 5; i++) {
        cout << "1(dog), 2(cat), 3(horse), 4(pig):";
        cin >> choice;
        switch (choice) {
        case 1: ptr = new Dog;
            break;
        case 2: ptr = new Cat;
            break;
        case 3: ptr = new Horse;
            break;
        case 4: ptr = new Pig;
            break;
        default: ptr = new Mammal;
            break;
        }
        theArray[i] = ptr;
    }
    for (i = 0; i < 5; i++) {
        theArray[i]->Speak();
    }
    return 0;
}
