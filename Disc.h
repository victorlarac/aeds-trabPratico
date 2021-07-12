#ifndef DISC_H
#define DISC_H
#include <stdio.h>
#include <stdlib.h>

//#include "Tokenizer.h"
#include "Lista.h"

#define PATH "dataset/arquivo1.txt"
#define PATH 2 "dataset/arquivo2.txt"

typedef struct Params{
    int maxcols;
    int maxrows;
}Params;

void Disc( Pointers *p);

#endif