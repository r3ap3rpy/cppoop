#include <iostream>
enum BREED {Golden, Pug, Shepherd, Berneese, Rotweiller};
using namespace std;
class Mammal {
public:
    Mammal();
    Mammal(int age);
    ~Mammal();
    int getAge() { return itsAge; }
    void setAge(int age) { itsAge = age; }
    int getWeight() { return itsWeight; }
    void setWeight(int weight) { itsWeight = weight; }
    void Speak() const { cout << "I am talking mammal!" << endl; }
    void Sleep() const { cout << "I am sleeping!" << endl; }
    void Move() const { cout << "The mammal is moving!" << endl; }
    void Move(int distance) const { cout << "The mammal is moving distance: " << distance << endl; }
protected:
    int itsAge;
    int itsWeight;
};
class Dog : public Mammal {
public:
    Dog();
    Dog(int age);
    Dog(int age, int weight);
    Dog(int age, BREED breed);
    Dog(int age, int weight, BREED breed);
    ~Dog();
    BREED getBreed() const { return itsBreed; }
    void setBreed(BREED breed) { itsBreed = breed; }
    void WagTail() const { cout << "I am wagging my tail!" << endl; }
    void BegForFood() const { cout << "Feed me master please!" << endl; }
    void Move() const { cout << "The dog is moving!" << endl; }

protected:
    BREED itsBreed;
};
Mammal::Mammal() :
    itsAge(3),
    itsWeight(5) {
    cout << "The mammal constructor was ran!" << endl;
}
Mammal::Mammal(int age):
itsAge(age),
itsWeight(5) {
    cout << "The mammal constructor with one argument!" << endl;
}
Mammal::~Mammal() {
    cout << "The mammal was destructed!" << endl;
}
Dog::Dog() :
    itsBreed(Pug) {
    cout << "The dog constructor was called!" << endl;
}
Dog::Dog(int age) :
    Mammal(age),
    itsBreed(Pug) {
    cout << "The dog (int) constructor was called!" << endl;
}
Dog::Dog(int age, int weight) :
    Mammal(age),
    itsBreed(Pug) {
    itsWeight = weight;
    cout << "The dog (int, int) constructor was called!" << endl;
}
Dog::Dog(int age, BREED breed) :
    Mammal(age),
    itsBreed(breed) {
    cout << "The dog (int, breed) constructor was called!" << endl;
}
Dog::Dog(int age, int weight, BREED breed) :
    Mammal(age),
    itsBreed(breed) {
    itsWeight = weight;
    cout << "The dog (int, int, breed) constructor was called!" << endl;
}
Dog::~Dog()
{
    cout << "The dog destructor was called!" << endl;
}
int main()
{
    Dog Bab;
    Dog rover(5);
    Dog buster(6, 8);
    Dog yorkie(3, Rotweiller);
    Dog dobbie(4, 20, Berneese);
    Bab.Speak();
    Bab.WagTail();
    //Bab.Move(100);
    cout << "Bab is of breed: " << Bab.getBreed() << endl;
    
}
