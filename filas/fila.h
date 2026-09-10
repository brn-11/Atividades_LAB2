#ifndef FILA_H
#define FILA_H
#define n 5

typedef struct elemfila
{
    int valor;

} elemfila;
typedef struct
{
    elemfila filas[n + 1];
    int inicio;
    int fim;
} fil;
fil insercao_fila(fil inserirfila, int x);
fil remove_f(fil removefila);
int consulta_fila(fil c_fila, int x);
void fila_vazia(fil vaziaF);
void fila_cheia(fil cheiaF);
fil criar_fila(fil criarF);
#endif