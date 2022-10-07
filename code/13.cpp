#include <iostream>
using namespace std;

enum TYPE {HORSE, PEGASUS};
class Horse {
public:
    virtual void Gallop() { cout << "Gallopping..." << endl; }
private:
    int itsAge;
};
class Pegasus : public Horse {
public:
    virtual void Fly() { cout << "I believe I can fly!" << endl; }

};
const int numberOfHorses = 5;
int main()
{
    Horse* Ranch[numberOfHorses];
    Horse* pHorse;
    int choice, i;
    for (i = 0; i < numberOfHorses; i++) {
        cout << "(1) Horse, (2)Pegasus:";
        cin >> choice;
        if (choice == 2)
            pHorse = new Pegasus;
        else
            pHorse = new Horse;
        Ranch[i] = pHorse;
    }
    cout << endl;
    for (i = 0; i < numberOfHorses; i++) {
        Pegasus* pPeg = dynamic_cast<Pegasus*> (Ranch[i]);
        if (pPeg != NULL)
            pPeg->Fly();
        else
            cout << "It's just a horse!" << endl;
        delete Ranch[i];
    }
    return 0;
}
