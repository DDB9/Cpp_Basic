#include "ReverseFile.h"

ReverseFile::ReverseFile() = default;

void ReverseFile::reverse(std::string inputFilePath, std::string outputFilePath)
{
    std::ifstream inputStream;
    std::ofstream outputStream;

    outputStream.open(outputFilePath, std::ios::out);
    outputStream.clear();   // Clear file before writing anything to it.

    inputStream.open(inputFilePath);
    if (!inputStream || !outputStream)
    {
        std::cout << "Yikes! Something went wrong when trying to open a file! Please try again." << std::endl;
        exit(0);
    }

    while (!inputStream.eof())
    {
        fileLength++;
        inputStream.get(character);
    }

    if (inputStream.is_open())
    {
        std::ifstream inputFile(inputFilePath, std::ios::ate);
        std::streampos size = inputFile.tellg();

        for (int i = 1; i <= size; i++)
        {
            inputFile.seekg(-i, std::ios::end);
            inputFile.get(character);

            if (!outputStream)
            {
                std::cout << "Uh oh! Something wen wrong when trying to open a file! please try again." << std::endl;
                exit(0);
            }
            
            outputStream.put(character);
        }
    }

    outputStream.close();
    inputStream.close();

    std::cout << "Process finished! Check Result.txt!" << std::endl;
}
