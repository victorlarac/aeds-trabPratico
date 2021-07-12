#include "Tokenizer.h"

int GetSizeOf(char *line, const char sep[]){
    char *pt;
    int idex = 0;
    char tmp[size];
    
    strcpy(tmp,line);
    
    pt = strtok(tmp, sep);

    while(pt){
        idex ++;
        pt = strtok(null,sep);
    }
    return idex;
}
void GetTokens(char *line,const char sep[], int *toks){
    char *pt;
    int idex = 0;

    pt = strtok(tmp,sep);
    while(pt){
        *(toks+idex) = atoi(pt);
        pt = strtok (NULL , sep);
        idex ++;
    }
}