#pragma once
#include "Currency.h"

class Euromunt : public Currency
{
	public:
		Euromunt(std::string name, float value);
		std::string name;
		float value;

		void betaal() override;
};