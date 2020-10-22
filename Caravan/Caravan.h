#ifndef CARAVAN_CARAVAN_H
#define CARAVAN_CARAVAN_H

#include <iostream>
#include <string>
#include "Koffer.h"

class Caravan
{
public:
    Caravan(std::string kleur);

    // BIG 3
    virtual ~Caravan();
    Caravan(const Caravan& andereAuto);
    Caravan& operator=(const Caravan& andereAuto);

    void vulCaravan();
    void displayCaravan() const;

    std::string kleur = "Grijs";

private:
    Koffer koffer;
};


#endif //CARAVAN_CARAVAN_H
