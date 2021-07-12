# Algoritmos e Estruturas de Dados
## Implementação do exercicio de memoria e disco
Victor Cunha Freitas Lara

## Resolução do Problema:


Para responder essa pergunta detalharei meu raciocínio em tópicos:

Criação de um vetor no qual cada posição representará uma página, ou seja, caso haja 50 páginas será necessário um vetor de 50 posições. A ideia é que cada posição armazene um contador que representará o número de vezes que a página foi acessada.

Após criar o vetor, criar uma função que gere números 
aleatórios entre 0 e o tamanho do vetor, seguindo o exemplo acima uma função que gere números entre 0 e 50. Esse valor randômico simulará o número da página que foi acessada. Logo, se o número gerado for por exemplo o 49 a posição 49 do vetor receberá um (+1) indicando um acesso. Após criar essa função rodar ela 100x, como se estivesse simulando 100 acessos aleatórios.

Em seguida, criar outra função que determinará quais páginas sairão. Para isso, essa função deve receber um valor inteiro ‘k’ que indicará quantas páginas serão removidas e um valor ‘x’, que será o número de ‘k’ na última chamada da função, ou seja, na primeira chamada ‘x’, é pré-definido com o valor do tamanho do vetor (50) e ‘k’ pode ser tanto um número aleatório quanto um número fornecido pelo usuário (desde que ele seja menor que 3 o tamanho do vetor ‘50’) logo após a chamada da função no ‘main’ ‘x’ receberá o valor de ‘k’.

 Acompanhe o raciocínio dentro da função:

– Se ‘k’ for maior que ‘x’, então ‘x’ recebe ‘k’. ‘x’ servirá para determinar qual o intervalo que será removido, e esse intervalo começará da última posição do vetor.
Caso ‘x=2’ o intervalo será as últimas 2 posições do meu vetor (50,49).

– Ordenar o intervalo ‘x’ em ordem decrescente, ou seja, o menor número do vetor no intervalo ‘x’ ocupará a última posição do vetor.

– Zerar ‘k’ posições do vetor em ordem decrescente. Logo se ‘k’ for igual a 1 será zerada a última posição do vetor (50). Se ‘k’ igual a 5 as 5 últimas posições. . .

– “Jogar” todas as ‘k’ posições zeradas para o início do vetor e “chegar para trás” todas as outras posições. Dessa forma toda página recém inserida correrá menos risco de ser eliminada. 

### Para implementação:
Para implementar, o programa foi dividido em memory, disc, list e swap, a memória é criada com uma estrutura linear de fila com um tamanho de vetor 5. O modelo cria um disco por meio de uma estrutura list e inicia uma memória por meio de uma matriz.

### Para compilar foi utlizado o seguinte comando:

gcc *.c -o Lista Disc Memory main && ./trab
