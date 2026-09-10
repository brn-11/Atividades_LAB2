#ifndef PILHA_H
#define PILHA_H
#define n 5
#include <stdbool.h>
typedef struct elemPilha
{
    int valor;
} elemPilha;
typedef struct pil
{
    elemPilha aPilha[n];
    int topo;
} pil;
pil criar(pil criarPilha);
bool cheia(pil cheiaPilha);
bool vazia(pil vaziaPilha);
pil push(pil inserirPilha, int x);
pil pop(pil removerPilha);
pil ordenar(pil ordenarPilha);
#endif