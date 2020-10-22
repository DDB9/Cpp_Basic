#ifndef LEZENSCHRIJVEN_MERGEFILES_H
#define LEZENSCHRIJVEN_MERGEFILES_H

#include <iostream>
#include <fstream>
#include <sstream>

class MergeFiles
{
public:
    MergeFiles();
    void merge(std::string inputPathOne, std::string inputPathTwo, std::string dumpFilePath);

private:
    std::string currentLine;
};


#endif //LEZENSCHRIJVEN_MERGEFILES_H
