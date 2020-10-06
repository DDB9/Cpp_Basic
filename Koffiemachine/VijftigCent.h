#pragma once
#include <string>
#include "Currency.h"

class VijftigCent : public Currency
{
	public:
		VijftigCent(std::string name, float value);
		std::string name;
		float value;

		void betaal() override;
};