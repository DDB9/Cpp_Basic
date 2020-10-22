#ifndef CARAVAN_KOFFER_H
#define CARAVAN_KOFFER_H

#include <iostream>
#include <string>
#include "Sokken.h"

class Koffer
{
public:
    Koffer();
    Koffer(std::string k);
    Koffer(std::string k, Sokken inh);

    // BIG 3
    virtual ~Koffer();                  // Deconstructor.
    Koffer(const Koffer& k);            // Copy-Constructor.
    Koffer& operator=(const Koffer& k); // Assignment Operator.

    std::string kleur = "Grijs";
    Sokken inhoud;
};


#endif //CARAVAN_KOFFER_H
