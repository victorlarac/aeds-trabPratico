#include "Memory.h"

void MemoryInitialize(int num, int memory[num][Max]){
    for (int i = 0; i < num; i++){
        for (int j = 0; j < Max; j++){
            memory[i][j] = 0;
        }
    }
}

int Queue(char *path, int numP){
    FILE *file;
    const char s[] = "P";
    char *tok;
    char *res;
    
    file = fopen(path, "r");
    if(file == NULL){
        printf("Não foi possível abrir o arquivo!\n");
    }
    
    while(!feof(file)){ 
        tok = strtok(res, s);
          
        while(tok != NULL){
            tok = strtok(NULL, s);
        } 
        num++;
    }
    fclose(file);

}




void Dequeue(char *path, Pointers *p){
    FILE *file;
    const char s1[] = "PA<,0>";
    char *tok;
    char *res;
 
    file = fopen(path, "r");
    if(file == NULL){
        printf("Não foi possível abrir o arquivo!\n");
    }
    
    while(!feof(file)){
        Item *d = malloc (sizeof(Item)); 
        int aux = 0;
        tok = strtok(res, s1);
        d->ind = atoi(tok);
        while(tok != NULL){  
            d->proc[aux] = atoi(tok);
            tok = strtok(NULL, s1);
            aux++;
        }
        Insert(p, *d);
    }
    fclose(file);
}
