#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

#include "SimonSays.h"

bool playGame = true;
int main()
{
    srand(time(NULL));

    std::vector<int> simon = {1, 2, 3};

    IncreaseArray(simon, true);

    while (playGame)
    {
        PlayGame(simon);
    }

    std::cout << "Thank you for playing!" << std::endl;
    std::cout << "You've reached a sequence of " << simon.size() << " elements!" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}
