#include "Caravan.h"

#include <utility>

Caravan::~Caravan() = default;

// Alternatieve constructor.
Caravan::Caravan(std::string kleur) {
    this->kleur = kleur;
}

// Copy-constructor.
Caravan::Caravan(const Caravan& andereAuto) {
    if (this == &andereAuto) return; // self-check
    this->koffer = Koffer("Rood", Sokken("Groen"));    // create deep-copy values.
}

// Assignment Operator.
Caravan& Caravan::operator=(const Caravan& andereAuto) {
    if (this == &andereAuto) return *this; // self-check
    koffer = Koffer("Rood", Sokken("Groen"));  // create deep copy values.
    return *this;
}

void Caravan::vulCaravan() {
    this->koffer = Koffer("Rood");
    std::cout << "De koffer staat nu in de caravan!" << std::endl;
}

void Caravan::displayCaravan() const {
    std::cout << "De "<< kleur << " (" << &kleur << ")" << " gekleeurde caravan bevat een " << koffer.kleur << " (" << &koffer.kleur << ")" << " gekleeurde koffer, met "
              << koffer.inhoud.kleur << " (" << &koffer.inhoud.kleur << ")"  <<  " gekleeurde sokken.\n" << std::endl;

}
