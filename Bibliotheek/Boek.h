#pragma once
#include <iostream>
#include "Bibliotheek.h"

class Boek 
{
public:
	Boek();
	virtual ~Boek();

	void leverIn(Bibliotheek* bieb);
};