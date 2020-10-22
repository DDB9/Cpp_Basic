#ifndef CARAVAN_SOKKEN_H
#define CARAVAN_SOKKEN_H

#include <iostream>
#include <string>

class Sokken
{
public:
    Sokken();
    Sokken(std::string k);

    // BIG 3
    virtual ~Sokken();  // Deconsructor.
    Sokken(const Sokken& s);    // Copy-constructor.
    Sokken& operator=(const Sokken& s); // Assignment Operator.

    std::string kleur = "Grijs";
};


#endif //CARAVAN_SOKKEN_H
