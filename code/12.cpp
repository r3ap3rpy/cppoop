#include <iostream>
using namespace std;
class ElectricMotor {
public:
    ElectricMotor() {};
    virtual ~ElectricMotor() {};
    void StartMotor() {
        Accelerate();
        Cruise();
    }
    void StopMotor() {
        cout << "Motor is stopped!" << endl;
    }
private:
    void Accelerate() {
        cout << "The motor is accelerating!" << endl;
    }
    void Cruise() {
        cout << "The motor is at curising speed!" << endl;
    }
};
class Fan : private ElectricMotor 
{
public:
    Fan() {};
    ~Fan() {};
    void StartFan() {
        StartMotor();
    }
    void StopFan() {
        StopMotor();
    }
};
int main()
{
    Fan mFan;
    mFan.StartFan();
    mFan.StopFan();
}
