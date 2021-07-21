#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

#define n 7

int main (){

  int matriz[n][n];
  int count=0 ,aux = 0;
  bool stop = true;
  int aux1;
 

for (int i=0; i<n; i++ )
  for (int j=0; j<n; j++ ){
    matriz[i][j] = rand()%99 + 0;
  }

printf("Inicio: %d\n",matriz[0][0]);

printf("Fim: %d\n",matriz[6][6]);

count = count + matriz[0][0];

int j =0;

for (int i=0; i<n; i++){
  if(stop == true){
    if(matriz[i+1][j] >= matriz[i][j+1] && j==0){
      count = count + matriz[i+1][j];
      i++;
      if(matriz[6][j] == matriz[i+1][j]){
        stop = false;
        j=aux; 
      }
    }
    else{
      count = count + matriz[i][j+1];
      int aux1=1;
        for(int j=aux1;j<n;j++){
          if(matriz[i][j+1] >= matriz[i+1][j] && matriz[i][j+1] >= matriz [i][j-1]){
            count = count + matriz[i][j+1];
            aux1=j;
          }
          else if(matriz[i+1][j] >= matriz[i][j+1] && matriz[i][j+1] >= matriz [i][j-1]){
            count = count + matriz[i+1][j];
            i++;
            if(matriz[6][j] == matriz[i+1][j]){
              stop = false;
              j=aux;
            }
         }
        }

        for (int j=aux1; j>=0; j--){
          if(matriz[i][j-1] >= matriz[i][j+1] && matriz[i][j-1] >= matriz[i+1][j]){
              count = count + matriz[i-1][j];
              j--;
              aux1=j;
          }
          else if(matriz[i+1][j] >= matriz[i][j+1] && matriz[i+1][j] >= matriz[i][j-1]){
            count = count + matriz[i+1][j];
            i++;
            if(matriz[6][j] == matriz[i+1][j]){
              stop = false;
              j=aux;
            }
          } 
        } 
    }
  }
}
    
aux++;

for (int j=aux; j<n; j++ ){
  count=count+matriz[6][aux];
}

printf("Soma dos componentes: %d\n",count);


  
printf("\n\n******************* Saida de Dados ********************* \n\n");
  
for (int i=0; i<n; i++ )
  for (int j=0; j<n; j++ ){
      
      if(j==n-1){
        printf("[%d] \n",matriz[ i ][ j ]);
      }else{
        printf ("[%d] ",matriz[ i ][ j ]);
      }
    }
  
return(0);
}