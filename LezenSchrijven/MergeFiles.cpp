#include "MergeFiles.h"

MergeFiles::MergeFiles() = default;

void MergeFiles::merge(std::string inputPathOne, std::string inputPathTwo, std::string dumpFilePath)
{
    std::ifstream inputStreamOne, inputStreamTwo;
    std::ofstream outputStream;

    outputStream.open(dumpFilePath, std::ios::out);
    outputStream.clear();   // Clear file before writing anything to it.

    inputStreamOne.open(inputPathOne);
    inputStreamTwo.open(inputPathTwo);
    if (!inputStreamOne || !inputStreamTwo || !outputStream)
    {
        std::cout << "Oof! Something went wrong tyring to open a file! Please try again!" << std::endl;
        exit(0);
    }


    while (!inputStreamOne.eof())
    {
        std::getline(inputStreamOne, currentLine);
        outputStream << currentLine << std::endl;

        if (!inputStreamTwo.eof())
        {
            std::getline(inputStreamTwo, currentLine);
            outputStream << currentLine << std::endl;
        }
    }

    inputStreamOne.close();
    inputStreamTwo.close();
    outputStream.close();

    std::cout << "Process finished! Check Result.txt!" << std::endl;
}