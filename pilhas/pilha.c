#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"
pil criar(pil criarPilha)
{
    criarPilha.topo = -1;
    return criarPilha;
}
bool cheia(pil cheiaPilha)
{
    if (cheiaPilha.topo == (n - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool vazia(pil vaziaPilha)
{
    if (vaziaPilha.topo == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
pil push(pil inserirPilha, int x)
{
    if (cheia(inserirPilha))
    {
        printf("\n overflow!");
    }
    else
    {
        inserirPilha.topo = inserirPilha.topo + 1;
        inserirPilha.aPilha[inserirPilha.topo].valor = x;
    }
    return inserirPilha;
}
pil pop(pil removerPilha)
{
    int valor_recebido;
    if (vazia(removerPilha))
    {
        printf("\nDeu Underflow!");
    }
    else
    {
        valor_recebido = removerPilha.aPilha[removerPilha.topo].valor;
        removerPilha.topo = removerPilha.topo - 1;
        printf("\nValor removido: %d", valor_recebido);
    }
    return removerPilha;
}
pil ordenar(pil ordenarPilha)
{
    int i, j, chave;
    for (i = 1; i <= ordenarPilha.topo; i++)
    {
        chave = ordenarPilha.aPilha[i].valor;
        j = i - 1;
        while ((j >= 0) && (ordenarPilha.aPilha[j].valor > chave))
        {
            ordenarPilha.aPilha[j + 1] = ordenarPilha.aPilha[j];
            j = j - 1;
        }
        ordenarPilha.aPilha[j + 1].valor = chave;
    }
    return ordenarPilha;
}