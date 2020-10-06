#include "VijftigCent.h"

VijftigCent::VijftigCent(std::string name, float value) : name(name), value(value) {};

void VijftigCent::betaal()
{
	std::cout << "Je hebt met " << name << " betaalt!" << std::endl;
}
