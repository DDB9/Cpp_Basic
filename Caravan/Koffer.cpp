#include "Koffer.h"
#include "Caravan.h"

Koffer::Koffer() = default;
Koffer::~Koffer() = default;

Koffer::Koffer(std::string k) {
    this->kleur = k;
    this->inhoud = Sokken("Groen");
}

Koffer::Koffer(std::string k, Sokken inh) {
    this->kleur = k;
    this->inhoud = inh;
}

Koffer::Koffer(const Koffer &k) {
    if (this == &k) return;
    this->kleur = k.kleur;
    this->inhoud = Sokken(k.inhoud.kleur);
}

Koffer& Koffer::operator=(const Koffer &k) {
    if (this == &k) return *this; // self-check;
    this->kleur = k.kleur;  // create deep copy values.
    this->inhoud = Sokken(k.inhoud.kleur);
    return *this;
}
