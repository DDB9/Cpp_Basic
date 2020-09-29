#pragma once

#include "Persoon.h"

class Docent : public Persoon
{
public:
	Docent(std::string n, int a);
	long double salaris;
	long double getSalaris();
	void setSalaris(long double amnt);

};