#include <iostream>
#include "Animal.h"
#include "ISay.h"


int main()
{
	std::cout << "Program begins..." << std::endl;
	Animal dog = Animal("Pesyk");
	dog.setSaying(new SayGoodBye());
	dog.say();
	dog.setSaying(new SayHello());
	dog.say();
	std::cout << "Program ends..." << std::endl;
}
