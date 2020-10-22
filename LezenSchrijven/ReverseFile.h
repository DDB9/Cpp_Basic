#ifndef LEZENSCHRIJVEN_REVERSEFILE_H
#define LEZENSCHRIJVEN_REVERSEFILE_H

#include <iostream>
#include <fstream>

class ReverseFile
{
public:
    ReverseFile();

    void reverse(std::string inputFilePath, std::string outputFilePath);

private:
    int fileLength;
    char character;

};

#endif //LEZENSCHRIJVEN_REVERSEFILE_H
