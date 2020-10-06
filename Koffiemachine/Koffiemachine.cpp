#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

#include "Koffiemachine.h"
#include "Koffiemunt.h"
#include "VijftigCent.h"
#include "Euromunt.h"

Koffiemachine::Koffiemachine() { setKoffiesoorten(); };

int main()
{
    Koffiemachine koffiemachine;
    Euromunt eur = Euromunt("Euromunt", 1);
    VijftigCent vijftig_cent = VijftigCent("Vijftig cent", 0.50);
    Koffiemunt koffiemunt = Koffiemunt("Koffiemunt");

    int keuze;
    float inworpWaarde = 0;
    std::cout << "Welkom! Kies uw betaalmiddel AUB..." << std::endl;
    std::cout << "(1.) 1 EUR |(2.) 50 CENT |(3.) KOFFIEMUNT" << std::endl;
    std::cin >> keuze;
    switch (keuze)
    {
        case 1: inworpWaarde = 1;
            // Display ingeworpen munt
            break;

        case 2: inworpWaarde = 0.50;
            // Display ingeworpen munt
            break;

        case 3: inworpWaarde = 2;
            // Display ingeworpen munt
            break;

        default:
            break;
    }
    
    std::cout << "\nMet 1 Euro heeft u keuze uit de volgende opties:" << std::endl;
    for (auto it = koffiemachine.koffiesoorten.begin();
        it != koffiemachine.koffiesoorten.end();
        ++it)
    {
        if (it->second <= inworpWaarde) std::cout << it->first << std::endl;
    }
  
}

void Koffiemachine::setKoffiesoorten() 
{
    koffiesoorten.insert(std::pair<std::string, float>("Latte Macchiato", 2));
    koffiesoorten.insert(std::pair<std::string, float>("Cappuchino", 1));
    koffiesoorten.insert(std::pair<std::string, float>("Espresso", 0.50));
}





