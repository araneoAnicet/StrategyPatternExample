#pragma once
#include <iostream>

class ISay {
public:
	virtual void say() = 0;
};

class SayHello: public ISay {
public:
	void say() override;
};

class SayGoodBye : public ISay {
public:
	void say() override;
};
