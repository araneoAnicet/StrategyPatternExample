#pragma once
#include <string>
#include "ISay.h"

class Animal {
private:
	std::string name;
	ISay* saying;
public:
	Animal(std::string name);
	~Animal();

	void setSaying(ISay* saying);
	void say();

};

