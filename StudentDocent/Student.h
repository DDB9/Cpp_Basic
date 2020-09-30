#pragma once

#include "Persoon.h"

class Student : public Persoon
{
public:
	Student(std::string n, int a);
	std::string huiswerk;
	std::string getHuiswerk();
	void setHuiswerk(std::string amnt);
};