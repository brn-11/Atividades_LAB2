#include <stdio.h>
#include "fila.h"

fil insercao_fila(fil inserirfila, int x)
{
    int temp = (inserirfila.fim % n) + 1;

    if (temp != inserirfila.inicio)
    {
        inserirfila.fim = temp;
        inserirfila.filas[inserirfila.fim].valor = x;

        if (inserirfila.inicio == 0)
        {
            inserirfila.inicio = 1;
        }

        return inserirfila;
    }
    else
    {
        printf("Erro: Fila Cheia (Overflow)!\n");
        return inserirfila;
    }
}

fil remove_f(fil removefila)
{
    int valor_backup;
    if (removefila.inicio != 0)
    {
        valor_backup = removefila.filas[removefila.inicio].valor;
        printf("Valor removido: %d\n", valor_backup);

        if (removefila.fim == removefila.inicio)
        {
            removefila.inicio = 0;
            removefila.fim = 0;
        }
        else
        {
            removefila.inicio = (removefila.inicio % n) + 1;
        }
        return removefila;
    }
    else
    {
        printf("deu underflow\n");
        return removefila;
    }
}

int consulta_fila(fil c_fila, int x)
{
    if (c_fila.inicio == 0)
    {
        return -1;
    }

    int i = c_fila.inicio;
    do 
    {
        if (c_fila.filas[i].valor == x)
        {
            return i;
        }

        if (i == c_fila.fim)
        {
            break;
        }

        i = (i % n) + 1;
        
    } while (1);

    return -1;
}
fil criar_fila(fil criarF)
{
    criarF.inicio = 0;
    criarF.fim = 0;
    return criarF;
}
void fila_cheia(fil cheiaF)
{
    if (((cheiaF.fim % n) + 1) == cheiaF.inicio)
    {
        printf("Fila bem cheia!\n ");
    }
    else
    {
        printf("Fila nao esta cheia!\n");
    }
}
void fila_vazia(fil vaziaF)
{
    if (vaziaF.inicio == 0)
    {
        printf("Esta vazia \n");
    }
    else
    {
        printf("Fila nao esta vazia!\n");
    }
}