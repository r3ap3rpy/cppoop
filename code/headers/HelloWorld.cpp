#include <iostream>
#include "ClassDefintion.h"
#include "MemberDefiniton.h"

int main()
{
	Dog boris;
	boris.Bark();
	std::cout << "Boris is " << boris.getAge() << " years old with " << boris.getWeight() << " KGs." << std::endl;
	Dog Szuki(6,15);

	std::cout << "Szuki is " << Szuki.getAge() << " years old with " << Szuki.getWeight() << " KGs." << std::endl;
}
