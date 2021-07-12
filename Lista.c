#include "Lista.h"

void Make(Pointers *p){
	p->first = 1;
	p->last = 1;
}

void Insert(Pointers *p, Item d){
	if(p->last % Max + 1 == p->first)
	{
		printf("Memória cheia!\n\n");
	}else{
		p->vet[p->last - 1] = d;
		p->last ++;
	}
}

void RemoveInsert(Pointers *p, Item *d){
	if(p->first == p->last)
	{
		printf("Memória vazia!\n\n");
	}
	else
	{
		*d = p->vet[p->first - 1];
		p->first = p->first % Max + 1;
	}
}

void Remove(Pointers *p, Item d){
	Pointers aux;
	Item rem;
	
	Make(&aux);
	
	if(p->first == p->last){
		printf("");
	}
	else{
		while(p->first != p->last){
			RemoveInsert(p, &rem);
			if(rem.value != p.value){
				Insert(&aux, rem);
			}
		}
		*p = aux;
	}
}

void Print(Pointers *p){
	int i = p->first - 1;
	
	printf("\tElementos na memória\n\n");
	
	while(i < p->last - 1)
	{
		printf("%d\t", p->vet[i].value);
		i++;
	}
	printf("\n\n");
}