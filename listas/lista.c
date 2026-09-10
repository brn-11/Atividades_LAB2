#include <stdio.h>
#include "lista.h"
#include <stdbool.h>
int busca(lis buscalist, int x)
{
    int i = 0;
    while (i < buscalist.tam)
    {
        if (buscalist.lista[i].chave == x)
        {
            return i;
        }
        else
        {
            i = i + 1;
        }
    }
    return -1;
}

lis inserir(lis inserirList, int Ovalor)
{
    int ValorSaida;
    ValorSaida = busca(inserirList, Ovalor);

    if (inserirList.tam < n)
    {
        if (ValorSaida == -1)
        {
            inserirList.lista[inserirList.tam].chave = Ovalor;
            inserirList.tam++;
            printf("\nInserido com sucesso! ");
        }
        else
        {
            printf("\nElemento ja existe na lista ");
        }
    }
    else
    {
        printf("\nLista cheia! ");
    }

    return inserirList;
}

lis remocao(lis removerlist, int ValoreARemover)
{
    int ValorSaida;
    ValorSaida = busca(removerlist, ValoreARemover);

    if (ValorSaida != -1)
    {
        for (int i = ValorSaida; i < removerlist.tam - 1; i++)
        {
            removerlist.lista[i].chave = removerlist.lista[i + 1].chave;
        }
        removerlist.tam = removerlist.tam - 1;
        printf("\nRemovido com sucesso! ");
    }
    else
    {
        printf("\nElemento nao existe na lista ");
    }

    return removerlist;
}
lis criar_lista(void)
{
    lis criaL;
    criaL.tam = 0;
    return criaL;
}
bool lista_cheia(lis listaC)
{
    if (listaC.tam == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool lista_vazia(lis vazial)
{
    if (vazial.tam == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
lis ordenarlista(lis ordenaL)
{
    int i, j;
    for (i = 0; i < (ordenaL.tam - 1); i++)
        for (j = 0; j < (ordenaL.tam - 1 - i); j++)
        {
            if (ordenaL.lista[j].chave > ordenaL.lista[j + 1].chave)
            {
                elemLista temp = ordenaL.lista[j];
                ordenaL.lista[j] = ordenaL.lista[j + 1];
                ordenaL.lista[j + 1] = temp;
            }
        }
    return ordenaL;
}
void imprimirlista(lis listaOfc)
{
    int i;
    for (i = 0; i < listaOfc.tam; i++)
    {
        printf("%d\n", listaOfc.lista[i].chave);
    }
}