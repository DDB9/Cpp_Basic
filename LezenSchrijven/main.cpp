#include <iostream>
#include <cstdio>
#include <conio.h>

#include "ReverseFile.h"
#include "MergeFiles.h"

int main()
{
    // Please note the results will be printed to the "Dump.txt" file.
    // Multiple operations CAN be called during the same execution of the program,
    // but will obviously overwrite each other.
    // I recommend commenting either the reverse or the merge call to see separate results.

    ReverseFile reverser;
    MergeFiles merger;

    reverser.reverse( R"(C:\Users\ddebr\Desktop\Folders\Development\CPP_Basic\LezenSchrijven\Dakhma.txt)",
                     R"(C:\Users\ddebr\Desktop\Folders\Development\CPP_Basic\LezenSchrijven\Result.txt)");


    merger.merge(R"(C:\Users\ddebr\Desktop\Folders\Development\CPP_Basic\LezenSchrijven\Dogma.txt)",
                 R"(C:\Users\ddebr\Desktop\Folders\Development\CPP_Basic\LezenSchrijven\Dakhma.txt)",
                 R"(C:\Users\ddebr\Desktop\Folders\Development\CPP_Basic\LezenSchrijven\Result.txt)");

    return 0;
}
