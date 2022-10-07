#include <iostream>
enum TypeOFMachine {Desktop, Laptop, Server};
class Machine {
public:
    Machine() :itsAge(2), itsWeight(5) {}
    ~Machine() {}
    int getAge() { return itsAge; }
    int getWeight() { return itsWeight; }
    void setAge(int x) { itsAge = x; }
    void setWeight(int x) { itsWeight = x; }
    void powerOn() { std::cout << "Machine is powering on!" << std::endl; };
    void powerOff() { std::cout << "Machine is powering off!" << std::endl; };
protected:
    int itsAge;
    int itsWeight;
};
class PC : public Machine {
public:
    PC() :itsKind(Laptop) {};
    ~PC() {}
    TypeOFMachine getType() { return itsKind; };
    void setType(TypeOFMachine kind) { itsKind = kind; }
    void doTheThingy() { std::cout << "Doing my thing!" << std::endl; }
protected:
    TypeOFMachine itsKind;
};


int main()
{
    PC Laptop;
    Laptop.powerOn();
    Laptop.powerOff();
    Laptop.doTheThingy();
    std::cout << "The laptop is of type " << Laptop.getType() << std::endl;
    
}
