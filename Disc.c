#include "Disc.h"

void Disc(Params *p){
    p->maxrows=0;
    p->maxcols=0;
    const char sep[3] = "A";
    char *line = NULL;
    FILE *fp;
    size_t len = 0;
    size_t read;
    int tmp;

    fp = fopen(PATH, "r");
    if(fp=NULL){
        printf("ERRO para abrir arquivo.");
        return;
    }
    while(!feof(fp){
        p->maxrows++;
        tmp = GetSizeOf(line, sep,len);
        p->maxcols=(tmp>p->maxcols)?tmp:p->maxcols;
    }
    p->maxcols=p->maxcols-1;
    fclose(fp);
}


