#include "Bibliotheek.h"

Bibliotheek::Bibliotheek() {}
Bibliotheek::~Bibliotheek() {}

void Bibliotheek::leenUit()
{
	if (heeftBoek) 
	{
		std::cout << "Het boek is nu uitgeleend!\n" << std::endl;
		heeftBoek = false;
	}
	else {
		std::cout << "Het boek is al uitgeleend...\n" << std::endl;
		return;
	}
}
