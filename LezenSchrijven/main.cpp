#include <iostream>
#include <cstdio>
#include <conio.h>

#include "ReverseFile.h"
#include "MergeFiles.h"

#define FILE R"(C:\Users\ddebr\Desktop\Folders\Development\CPP_Basic\LezenSchrijven\Dogma.txt)"
#define FILE2 R"(C:\Users\ddebr\Desktop\Folders\Development\CPP_Basic\LezenSchrijven\Dakhma.txt)"
#define RESULT R"(C:\Users\ddebr\Desktop\Folders\Development\CPP_Basic\LezenSchrijven\Result.txt)"

int main()
{
    // Please note the results will be printed to the "Result.txt" file.
    // Multiple operations CAN be called during the same execution of the program,
    // but will obviously overwrite each other.
    // I recommend commenting either the reverse or the merge call to see separate results.

    ReverseFile reverser;
    MergeFiles merger;

    reverser.reverse(FILE, RESULT);

    merger.merge(FILE, FILE2, RESULT);

    return 0;
}
