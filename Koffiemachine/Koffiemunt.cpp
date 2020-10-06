#include "Koffiemunt.h"

Koffiemunt::Koffiemunt(std::string name) : name(name) {};

void Koffiemunt::betaal()
{
	std::cout << "Je hebt met " << name << " betaalt!" << std::endl;
}