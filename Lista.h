#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

#define Max 5

typedef struct Item{
    int value;
}Item;

typedef struct Pointers{
    Item vet[Max];
    int first;
    int last;
}Pointers;

void Make(Pointers *p);
void Insert(Pointers *p, Item d);
void RemoveInsert(Pointers *p, Item *d);
void Remove(Pointers *p, Item d);
void Print(Pointers *p);

#endif