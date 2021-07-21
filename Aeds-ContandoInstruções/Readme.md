# Algoritmos e Estruturas de Dados
## Contando Instruções
Victor Cunha Freitas Lara

## Custo computacional:

O custo do algoritmo não é linear, e foi dividido em 3 custos:

#### Custo mínimo:
  1. Custo = n (se as colunas tiverem valores maiores do que as linhas).
   
#### Custo máximo:
2. Custo = n² (percorrendo toda a matriz).
#### Custo médio:
3. Custo = (n+n²)/2 (media de ambos os custos).




O maior caminho percorrido será o se a primeira linha estiver em ordem crescente e a segunda em ordem decrescente assim sucessivamente, e as colunas estiverem em ordem decrescente. Assim o algoritmo percorrera toda a matriz tendo o custo computacional n².

## Resolução do Problema:

Há mais de uma maneira de resolver esse problema, pois o algoritimo apresentado não apresenta custo linear.

Alguns Algoritimos Famosos para resolver esse problema são o de Dijkstra e o de Floyde-Warshall.

### Algoritmo de Dijkstra:

•	1º passo: iniciam-se os valores:

```
 para todo v ∈ V[G]
     d[v] ← ∞
     π[v] ← -1
d[s] ← 0
```
V[G] é o conjunto de vértices(v) que formam o Grafo G. d[v] é o vetor de distâncias de s até cada v. Admitindo-se a pior estimativa possível, o caminho infinito. π[v] identifica o vértice de onde se origina uma conexão até v de maneira a formar um caminho mínimo.

•	2º passo: temos que usar o conjunto Q, cujos vértices ainda não contém o custo do menor caminho d[v] determinado.
```
Q ← V[G]
```

•	3º passo: realizamos uma série de relaxamentos das arestas, de acordo com o código:
```
 enquanto Q ≠ ø
         u ← extrair-mín(Q)                     //Q ← Q - {u}
         para cada v adjacente a u
              se d[v] > d[u] + peso(u, v)          //relaxe (u, v)
                 então d[v] ← d[u] + peso(u, v)
                       π[v] ← u

```

### Algoritmo de Floyd-Warshall:

O algoritmo de Floyd-Warshall recebe como entrada uma matriz de adjacência que representa um grafo (V,E) orientado e valorado. O valor de um caminho entre dois vértices é a soma dos valores de todas as arestas ao longo desse caminho. As arestas E do grafo podem ter valores negativos, mas o grafo não pode conter nenhum ciclo de valor negativo. O algoritmo calcula, para cada par de vértices, o menor de todos os caminhos entre os vértices. Por exemplo, o caminho de menor custo. Sua ordem de complexidade é:
$$ \theta = (|V|³) \\ $$

#### O algoritmo se baseia nos passos abaixo:

•	Assumindo que os vértices de um grafo orientado  G são V=1,2,3..,n, considere um subconjunto 1,2,3,...,K;

•	Para qualquer par de vértices (i , j) em V, considere todos os caminhos de i a j cujos vértices intermédios pertencem ao subconjunto 1,2,3,4..,k-1, e p como o mais curto de todos eles;

•	O algoritmo explora um relacionamento entre o caminho p e os caminhos mais curtos de i a j com todos os vértices intermédios em 1,2,3,...,k-1;

•	O relacionamento depende de k ser ou não um vértice intermédio do caminho p.

#### Abaixo segue uma implementação em pseudocódigo do algoritmo de Floyd-Warshall:

```
ROTINA fw(Inteiro[1..n,1..n] grafo)
    # Inicialização
    VAR Inteiro[1..n,1..n] dist := grafo
    VAR Inteiro[1..n,1..n] pred
    PARA i DE 1 A n
        PARA j DE 1 A n
            SE dist[i,j] < Infinito ENTÃO
                pred[i,j] := i
    # Laço principal do algoritmo
    PARA k DE 1 A n
        PARA i DE 1 A n
            PARA j DE 1 A n
                SE dist[i,j] > dist[i,k] + dist[k,j] ENTÃO
                    dist[i,j] = dist[i,k] + dist[k,j]
                    pred[i,j] = pred[k,j]
    RETORNE dist
```

## Compilação:

Para compilar foi utilizado o terminal git bash no Windows, o seguinte comando:

Primeiro:

```
gcc Aeds.c -o aeds
```
Depois:
```
./aeds
```