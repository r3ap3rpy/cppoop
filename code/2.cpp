#include <iostream>
class Car {
public:
    int getWeight() { return weight; }
    std::string getMake() { return make; }
    std::string getColor() { return color; }
    void setWeight(int newWeight) { weight = newWeight; }
    void setMake(std::string newMake) { make = newMake; }
    void setColor(std::string newColor) { color = newColor; }
private:
    int weight;
    std::string make;
    std::string color;
};
int main()
{
    Car Porsche;
    Porsche.setColor("Red");
    Porsche.setMake("Porsche");
    Porsche.setWeight(1000);
    std::cout << "The car: " << Porsche.getMake() << " is color " << Porsche.getColor() << " weighs " << Porsche.getWeight() << std::endl;
}
