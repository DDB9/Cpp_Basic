#pragma once
#include <string>

class TweeEuromunt : public Currency
{
	public:
	TweeEuromunt(std::string name, float value);
	std::string name;
	float value;
};
