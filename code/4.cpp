#include <iostream>
class Dog {
public:
	Dog();
	Dog(int age, int weight);
	~Dog();
	void Bark();
	void setAge(int x);
	int getAge();
	void setWeight(int x);
	int getWeight();
private:
	int age;
	int weight;
};
Dog::Dog() {
	std::cout << "Initializing without arguments!" << std::endl;
	this->age = 10;
	this->weight = 14;
}
Dog::Dog(int age, int weight) {
	std::cout << "Initializing WITH arguments!" << std::endl;
	this->age = age;
	this->weight = weight;
}
Dog::~Dog() {
	std::cout << "The dog exited!" << std::endl;
}
void Dog::Bark() {
	{ std::cout << "Woff woff!" << std::endl; }
}
int Dog::getAge() {
	return this->age;
}
int Dog::getWeight() {
	return this->weight;
}
void Dog::setAge(int x) {
	this->age = x;
}
void Dog::setWeight(int x) {
	this->weight = x;
}
int main()
{
	Dog boris;
	boris.Bark();
	std::cout << "Boris is " << boris.getAge() << " years old with " << boris.getWeight() << " KGs." << std::endl;
	Dog Szuki(6,15);

	std::cout << "Szuki is " << Szuki.getAge() << " years old with " << Szuki.getWeight() << " KGs." << std::endl;
}
