#include <iostream>
//class -> object / instance
//Mammal -> Dog
//Furit -> apple
class Cat {
    //every member unless specified otherwise is private
    //public, private, protected
public:
    unsigned int age;
    unsigned int weight;
};
int main()
{
    Cat Cirmos;
    Cirmos.age = 10;
    Cirmos.weight = 200;
    std::cout << "Cat "<<Cirmos.age<<" years old and wieghs "<<Cirmos.weight <<" kgs.";
}
