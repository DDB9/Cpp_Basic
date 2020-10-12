#include <iostream>
#include "Boek.h"
#include "Bibliotheek.h"

int main()
{
    // Maak pointers naar boek en bieb objecten (op de heap).
    Boek* boek = new Boek();
    Bibliotheek* bieb = new Bibliotheek();

    // Leen het boek uit.
    bieb->leenUit();

    // Probeer het boek te lenen als het al is uitgeleend.
    bieb->leenUit();

    // Lever het boek weer in.
    boek->leverIn(bieb);

    // Probeer het boek in te leveren als het al ingeleverd is (wut).
    boek->leverIn(bieb);


    // Verwijder boek en bieb objecten om memory leaks te voorkomen.
    delete boek;
    delete bieb;
    return 0;
}
