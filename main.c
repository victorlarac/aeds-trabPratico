#include "Disc.h"
#include "Memory.h"

int main(){
    int opcao = -1;
    while (opcao != 0){
        printf("--------------------------<MENU>----------------------\n\n");
        printf("------------------------------------------------------\n\n");
        printf("Para buscar elemento no arquivo, digite 1.\n");
		printf("Para exeecutar os processos do arquivo, digite 2.\n");
		printf("Para imprimir a memória, digite 3.\n");
		printf("Para finalizar o programa, digite 0.\n");
		printf("-------------------------------------------------------\n\n");
		
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            Lista di;
            Make(&di);
            Disc(PATH, &di);
        break;

        case 2:
            Lista l;
            Make(&l);
            int num = 0;
            int Processos = 0;
            Processos = Queue(PATH2, num);
            int swap[Processos][Max];
            int memory[Processos][Max];
            MemoryInitialize(Processos, memory);    
            InitializeSwap(Processos, swap);
            Dequeue(PATH2, &l);
        break;
        case 3:
            Lista l; 
            Print(l);
        break;

        case 0:
            printf("EXIT PROGRAM!\n");
        break;

        default:
        printf("Opcao invalida. TENTE NOVAMENTE.");
        return 0;
        
    }

return 0;

}