#ifndef SWAP_H
#define SWAP_H

#include <stdio.h>
#include <stdlib.h>



#define maxcols 10


typedef struct Pointers{

    int first;
    int last;
}Pointers;

typedef struct Swap{
    int val;
}Swap;

void SwapWrite(Swap *a, Swap *b);
void InitializeSwap(int num, int swap[num][maxcols]);


#endif