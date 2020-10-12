#include "Boek.h"

Boek::Boek() {}
Boek::~Boek() {}

void Boek::leverIn(Bibliotheek* bieb)
{
	if (bieb->heeftBoek)
	{
		std::cout << "De kasten staan al vol!\n" << std::endl;
		return;
	}
	else
	{
		std::cout << "Bedankt en tot ziens!\n" << std::endl;
		bieb->heeftBoek = true;
	}
}