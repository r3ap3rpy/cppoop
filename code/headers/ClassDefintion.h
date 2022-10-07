#pragma once
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