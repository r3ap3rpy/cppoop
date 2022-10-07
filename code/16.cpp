#include <iostream>
using namespace std;
typedef int HANDS;
enum COLOR {Red,Green,Blue, Yellow,White,Black,Brown};
class Horse {
public:
	Horse(COLOR Color, HANDS height);
	virtual ~Horse() { cout << "Horse is destructed!" << endl; }
	virtual void Whinny() const { cout << "Whinny!" << endl; }
	virtual HANDS GetHeight() const { return itsHeight; }
	virtual COLOR GetColor() const { return itsColor; }
private:
	HANDS itsHeight;
	COLOR itsColor;
};
Horse::Horse(COLOR Color, HANDS height) :
	itsColor(Color), itsHeight(height) {
	cout << "Horse constructor!" << endl;
}
class Bird {
public:
	Bird(COLOR Color, bool migrates);
	virtual ~Bird() { cout << "Bird destructor" << endl; }
	virtual void Chirp() const { cout << "Chirp, chirp, chirp..." << endl; }
	virtual void Fly() const { cout << "I believe I can fly!" << endl; }
	virtual bool GetMigration() const { return itsMigration; }
	virtual COLOR GetColor() const { return itsColor; }
private:
	COLOR itsColor;
	bool itsMigration;
};
Bird::Bird(COLOR Color, bool migrates) :
	itsMigration(migrates), itsColor(Color) {
	cout << "The bird constructor!" << endl;
}
class Pegasus : public Horse, public Bird {
public:
	void Chirp() const { Whinny(); }
	Pegasus(COLOR, HANDS, bool, long);
	~Pegasus() { cout << "Pegasus destructor!" << endl; }
	virtual long GetNumberBElievers() const { return itsBelievers; }
private:
	long itsBelievers;
};
Pegasus::Pegasus(COLOR aColor, HANDS height, bool migrate, long NumBelieve) :
	Horse(aColor, height),
	Bird(aColor, migrate),
	itsBelievers(NumBelieve) {
	cout << "Pegasus constructed!" << endl;
}
int main()
{
	Pegasus* pPeg = new Pegasus(Red, 5, true, 10);
	pPeg->Fly();
	pPeg->Whinny();
	if (pPeg->GetMigration()) {
		cout << "It migrates!" << endl;
	}
	else {
		cout << "Stays in one place!" << endl;
	}
	delete pPeg;
}
