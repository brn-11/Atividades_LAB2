#ifndef LISTA_H
#define LISTA_H
#define n 5
#include <stdbool.h>
typedef struct elemLista
{
    int chave;
    char nome[n];
    char endereco[n];

} elemLista;
typedef struct lis
{
    elemLista lista[n];
    int tam;
} lis;
int busca(lis buscalist, int x);
lis inserir(lis inserirList, int Ovalor);
lis remocao(lis removerlist, int ValoreARemover);
lis criar_lista(void);
bool lista_cheia(lis listaC);
bool lista_vazia(lis vazial);
lis ordenarlista(lis ordenaL);
void imprimirlista(lis listaOfc);
#endif