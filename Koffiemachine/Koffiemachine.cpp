#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include "Koffiemachine.h"

Koffiemachine::Koffiemachine() { setKoffiesoorten(); };

int main()
{
    //! GEBRUIK DEZE NOG!!!!
    Koffiemachine koffiemachine;
    TweeEuromunt tweeEur = TweeEuromunt("Twee Euromunt", 2);
    Euromunt eur = Euromunt("Euromunt", 1);
    VijftigCent vijftig_cent = VijftigCent("Vijftig cent", 0.50);
    Koffiemunt koffiemunt = Koffiemunt("Koffiemunt");

    int keuze;
    float inworpWaarde = 0;
    std::cout << "Welkom! Kies uw betaalmiddel AUB..." << std::endl;
    std::cout << "(1.) 2 EUR | (1.) 1 EUR |(3.) 50 CENT |(4.) KOFFIEMUNT" << std::endl;
    std::cin >> keuze;

    switch (keuze)
    {
        case 1: 
            koffiemachine.displayOptions(tweeEur, tweeEur.value);
            break;

        case 2: 
            koffiemachine.displayOptions(eur, eur.value);
            break;

        case 3: 
            koffiemachine.displayOptions(vijftig_cent, vijftig_cent.value);
            break;

        case 4: 
            // Using 200 as OK debug code for koffiemunt because its easy to remember.
            koffiemachine.displayOptions(koffiemunt);
            break;

        default:
            break;
    }


}

void Koffiemachine::setKoffiesoorten() 
{
    koffiesoorten.insert(std::pair<std::string, float>("Irish Coffee", 5));
    koffiesoorten.insert(std::pair<std::string, float>("Latte Macchiato", 2));
    koffiesoorten.insert(std::pair<std::string, float>("Cappuchino", 1));
    koffiesoorten.insert(std::pair<std::string, float>("Espresso", 0.50));
}

void Koffiemachine::displayOptions(TweeEuromunt t, float betaalmiddel)
{
    std::cout << "\nMet 1x " << t.name << " heeft u keuze uit de volgende opties:" << std::endl;
    for (auto it = koffiesoorten.begin();
        it != koffiesoorten.end();
        ++it)
    {
        if (it->second <= t.value) std::cout << it->first << "  " << it->second << " EUR" << std::endl;
    }

    std::cout << "\nMaak uw keuze door de naam van het gewenste product in te voeren:" << std::endl;

    std::string keuze;
    std::cin >> keuze;
    processPayment(keuze, betaalmiddel);
}

void Koffiemachine::displayOptions(Euromunt e, float betaalmiddel)
{
    std::cout << "\nMet 1x " << e.name << " heeft u keuze uit de volgende opties:" << std::endl;
    for (auto it = koffiesoorten.begin();
        it != koffiesoorten.end();
        ++it)
    {
        if (it->second <= e.value) std::cout << it->first << "  " << it->second << " EUR" << std::endl;
    }

    std::cout << "\nMaak uw keuze door de naam van het gewenste product in te voeren:" << std::endl;

    std::string keuze;
    std::cin >> keuze;
    processPayment(keuze, betaalmiddel);
}

void Koffiemachine::displayOptions(VijftigCent v, float betaalmiddel)
{
    std::cout << "\nMet 1x " << v.name << " heeft u keuze uit de volgende opties:" << std::endl;
    for (auto it = koffiesoorten.begin();
        it != koffiesoorten.end();
        ++it)
    {
        if (it->second <= v.value) std::cout << it->first << "  " << it->second << " EUR" << std::endl;
    }

    std::cout << "\nMaak uw keuze door de naam van het gewenste product in te voeren:" << std::endl;

    std::string keuze;
    std::cin >> keuze;
    processPayment(keuze, betaalmiddel);
}

void Koffiemachine::displayOptions(Koffiemunt k)
{
    std::cout << "\nMet 1x " << k.name << " heeft u keuze uit alle opties:" << std::endl;
    for (auto it = koffiesoorten.begin();
        it != koffiesoorten.end();
        ++it)
    {
        std::cout << it->first << "  " << it->second << " EUR" << std::endl;
    }

    std::cout << "\nMaak uw keuze door de naam van het gewenste product in te voeren:" << std::endl;

    std::string keuze;
    std::cin >> keuze;
    // Insert koffiemunt code for payment process.
    processPayment(keuze, 200);
}

void Koffiemachine::processPayment(std::string koffie, float b)
{
    std::cout << "\nU heeft " << koffie << " gekocht." << std::endl;
    
    float wisselgeld = 0;

    for (auto it = koffiesoorten.begin();
        it != koffiesoorten.end();
        ++it)
    {
        if (it->first == koffie)
        {
            if (b == 200) goto GeenWisselgeld;
            wisselgeld = b - it->second;
        }
    }

    std::cout << "Uw wisselgeld betreft: " << wisselgeld << " EUR." << std::endl;
    return;

GeenWisselgeld:
    std::cout << "U heeft betaald met een koffiemunt. Er wordt geen wisselgeld uitgeworpen." << std::endl;

}




