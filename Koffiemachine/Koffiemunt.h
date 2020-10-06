#pragma once
#include "Currency.h"

class Koffiemunt : public Currency
{
	public:
		Koffiemunt(std::string name);
		std::string name;

		void betaal() override;
};