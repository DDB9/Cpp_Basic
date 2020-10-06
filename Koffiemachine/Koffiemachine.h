#pragma once
#include <iostream>
#include <map>

class Koffiemachine
{
	public:
		Koffiemachine();
		std::map<std::string, float> koffiesoorten;

		void setKoffiesoorten();
};