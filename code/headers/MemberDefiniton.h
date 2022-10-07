#pragma once
#include <iostream>
#include "ClassDefintion.h"
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