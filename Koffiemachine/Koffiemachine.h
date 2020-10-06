#pragma once
#include <iostream>
#include <map>
#include "TweeEuromunt.h"
#include "Euromunt.h"
#include "VijftigCent.h"
#include "Koffiemunt.h"

class Koffiemachine
{
	public:
		Koffiemachine();
		std::map<std::string, float> koffiesoorten;

		void setKoffiesoorten();
		void displayOptions(Koffiemunt k);
		void displayOptions(Euromunt e, float b);
		void displayOptions(VijftigCent v, float b);
		void displayOptions(TweeEuromunt t, float b);

		void processPayment(std::string koffie, float b);
};