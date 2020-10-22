#include <iostream>
#include "Caravan.h"

int main()
{
    auto* van = new Caravan("Blauw");

    van->vulCaravan();
    van->displayCaravan();

    std::cout << "Oh nee! Dat is pech, caravan weg!\n" << std::endl;

    Caravan van2 = Caravan("Blauw");
    van2 = *van;

    std::cout << "Nieuwe Caravan:" << std::endl;
    van2.displayCaravan();

    delete van;
    return 0;
}
