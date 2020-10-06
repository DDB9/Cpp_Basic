#include "Euromunt.h"

Euromunt::Euromunt(std::string name, float value) : name(name), value(value) {};

void Euromunt::betaal()
{
	std::cout << "Je hebt met " << name << " betaalt!" << std::endl;
}
