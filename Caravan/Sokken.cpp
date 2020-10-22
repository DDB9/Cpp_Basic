#include "Sokken.h"

Sokken::Sokken() = default;
Sokken::~Sokken() = default;

Sokken::Sokken(std::string k) {
    this->kleur = k;
}

Sokken::Sokken(const Sokken& s) {
    if (this == &s) return;
    this->kleur = "Grijs";
}

Sokken& Sokken::operator=(const Sokken& s) {
    if (this == &s) return *this; // self-check.
    this->kleur = s.kleur;  // create deep copy values.
    return *this;
}