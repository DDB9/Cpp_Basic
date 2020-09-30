#pragma once

#include <string>

class Persoon
{
public:
	int age = 0;
	std::string name;

	std::string getName();
	int getAge();
};