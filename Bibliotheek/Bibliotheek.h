#pragma once
#include <iostream>

class Bibliotheek 
{
public:
	Bibliotheek();
	virtual ~Bibliotheek();

	bool heeftBoek = true;

	void leenUit();
};