#pragma once
#include <stdlib.h>
#include <vector>
#include <iostream>

/// <summary>
/// Increases the size of the array and fills it with new numbers.
/// </summary>
/// <param name="arr">Array to increase and refill.</param>
/// <param name="init">True if the array is increased for the first time.</param>
void IncreaseArray(std::vector<int>& arr, bool init = false)
{
	// save the array size, the wipe it.
	int arrSize = arr.size();
	arr.clear();

	if (init)
	{
		for (int i = 0; i < arrSize; i++)
		{
			arr.push_back(rand() % 10);
			std::cout << arr[i] << std::endl;
		}
	}
    else
    {
        arr.resize(arrSize + 1);
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = rand() % 10;
            std::cout << arr[i] << std::endl;
        }
    }
}

bool PlayGame(std::vector<int>& arr)
{
    int counter = 3;
    while (counter >= 0)
    {
        std::cout << "Time remaining: " << counter << std::flush << "\r";
        Sleep(1000);
        counter--;

        if (counter == 0) system("cls");
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0) std::cout << "Enter the first number of the sequence." << std::endl;
        else if (i == arr.size() - 1) std::cout << "Enter the last number of the sequence." << std::endl;
        else std::cout << "Enter the next number in the sequence." << std::endl;

        int answer;
        std::cin >> answer;

        if (answer == arr[i]) std::cout << "Correct!" << std::endl;
        else
        {
            std::cout << "Game Over!" << std::endl;
            playGame = false;
            return false;
        }
    }

    std::cout << "Congratulations on completing this level!" << std::endl;
    IncreaseArray(arr);
    return true;
}