#include "Animal.h"
#include "ISay.h"
#include <iostream>

Animal::Animal(std::string name) {
	this->name = name;
}
Animal::~Animal() {
	delete this->saying;
}

void Animal::setSaying(ISay* saying) {
	delete this->saying;
	this->saying = saying;
}

void Animal::say() {
	std::cout << "My name is " << this->name << std::endl;
	this->saying->say();
}