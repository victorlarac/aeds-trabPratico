#include "Swap.h"

void SwapWrite(Swap *a, Swap *b){
	Swap aux;
	aux = *a;
	*a  = *b;
	*b  = aux;   
}
void InitializeSwap(int num, int swap[num][maxcols]){
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num ; j++){
            swap[i][j] = 0;
        }
    }
}