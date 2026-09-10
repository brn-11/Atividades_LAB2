#include <stdio.h>
#include <math.h>
#include "TADs.h"
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    lis minhalista;
    minhalista.tam = 0;

    fil minhafila;
    minhafila.inicio = 0;
    minhafila.fim = 0;

    pil minhapilha;
    minhapilha.topo = -1;

    int op;
    int opList;
    int opfila;
    int oppilha;

    do
    {
        printf("\n****ESCOLHA AS OPSAO****");
        printf("\n[1] - Lista");
        printf("\n[2] - Fila");
        printf("\n[3] - Pilha");
        printf("\n[0] - Sair");
        printf("\n-> ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\n[1] - Busca");
            printf("\n[2] - inserir");
            printf("\n[3] - remover");
            printf("\n[4] - Criar");
            printf("\n[5] - Esta Cheia?");
            printf("\n[6] - Esta Vazia?");
            printf("\n[7] - Ordenar a lista");
            printf("\n-> ");
            scanf("%d", &opList);
            system("cls");

            switch (opList)
            {
            case 1:
                printf("\nBuscando o valor 20:\n");
                busca(minhalista, 20);
                break;

            case 2:
                printf("\nVai ser inserido numeros 10,20,30,40,50,60, realizando 6 chamadas...... ");
                minhalista = inserir(minhalista, 10);
                minhalista = inserir(minhalista, 20);
                minhalista = inserir(minhalista, 30);
                minhalista = inserir(minhalista, 40);
                minhalista = inserir(minhalista, 50);
                minhalista = inserir(minhalista, 60);
                break;

            case 3:
                printf("\nRemovendo o valor 20:\n");
                minhalista = remocao(minhalista, 20);
                break;

            case 4:
                minhalista = criar_lista();
                printf("\nLista criada!");
                break;

            case 5:
                if (lista_cheia(minhalista) == true)
                {
                    printf("Lista esta cheia!\n");
                }
                else
                {
                    printf("Nao esta cheia!\n");
                }
                break;

            case 6:
                if (lista_vazia(minhalista) == true)
                {
                    printf("lista esta vazia!\n");
                }
                else
                {
                    printf("lista nao esta vazia\n");
                }
                break;

            case 7:
                minhalista = ordenarlista(minhalista);
                printf("Sua lista ordenada: \n");
                imprimirlista(minhalista);
                break;

            default:
                printf("\nOpcao invalida na lista!\n");
                break;
            }
            break;

        case 2:
            printf("\n[1] - Busca");
            printf("\n[2] - Inserir (3 chamadas)");
            printf("\n[3] - Remover (3 chamadas)");
            printf("\n[4] - Criar");
            printf("\n[5] - Esta Cheia?");
            printf("\n[6] - Esta Vazia?");
            printf("\n-> ");
            scanf("%d", &opfila);
            system("cls");

            switch (opfila)
            {
            case 1:
            {
                printf("\nBuscando o valor 20 na fila:\n");
                int posfila = consulta_fila(minhafila, 20);
                if (posfila != -1)
                {
                    printf("Elemento encontrado no indice %d\n", posfila);
                }
                else
                {
                    printf("Elemento nao encontrado\n");
                }
                break;
            }

            case 2:
                printf("\nInserindo 3 valores na fila...\n");
                printf("\ninserindo valor 10, 20, 30.");
                minhafila = insercao_fila(minhafila, 10);
                minhafila = insercao_fila(minhafila, 20);
                minhafila = insercao_fila(minhafila, 30);
                break;

            case 3:
                printf("\nRemovendo 3 valores da fila...\n");
                minhafila = remove_f(minhafila);
                minhafila = remove_f(minhafila);
                minhafila = remove_f(minhafila);
                break;

            case 4:
                minhafila = criar_fila(minhafila);
                printf("\nFila criada!\n");
                break;

            case 5:
                fila_cheia(minhafila);
                break;

            case 6:
                fila_vazia(minhafila);
                break;

            default:
                printf("\nOpcao invalida na fila!\n");
                break;
            }
            break;

        case 3:
            printf("\n[1] - Push (6 chamadas, valores 10 20 30 40 50 60)");
            printf("\n[2] - Pop (6 chamadas)");
            printf("\n[3] - Criar");
            printf("\n[4] - Esta Cheia?");
            printf("\n[5] - Esta Vazia?");
            printf("\n[6] - Ordenar a pilha");
            printf("\n-> ");
            scanf("%d", &oppilha);
            system("cls");

            switch (oppilha)
            {
            case 1:
                printf("\nEmpilhando 10,20,30,40,50,60, realizando 6 chamadas...... ");
                minhapilha = push(minhapilha, 10);
                minhapilha = push(minhapilha, 20);
                minhapilha = push(minhapilha, 30);
                minhapilha = push(minhapilha, 40);
                minhapilha = push(minhapilha, 50);
                minhapilha = push(minhapilha, 60);
                break;

            case 2:
                printf("\nDesempilhando, realizando 6 chamadas...... \n");
                minhapilha = pop(minhapilha);
                minhapilha = pop(minhapilha);
                minhapilha = pop(minhapilha);
                minhapilha = pop(minhapilha);
                minhapilha = pop(minhapilha);
                minhapilha = pop(minhapilha);
                break;

            case 3:
                minhapilha = criar(minhapilha);
                printf("\nPilha criada!\n");
                break;

            case 4:
                if (cheia(minhapilha) == true)
                {
                    printf("Pilha esta cheia!\n");
                }
                else
                {
                    printf("Pilha nao esta cheia!\n");
                }
                break;

            case 5:
                if (vazia(minhapilha) == true)
                {
                    printf("Pilha esta vazia!\n");
                }
                else
                {
                    printf("Pilha nao esta vazia!\n");
                }
                break;

            case 6:
                minhapilha = ordenar(minhapilha);
                printf("Pilha ordenada!\n");
                break;

            default:
                printf("\nOpcao invalida na pilha!\n");
                break;
            }
            break;

        case 0:
            printf("\nSaindo do programa...\n");
            break;

        default:
            printf("\nOpcao invalida no menu principal!\n");
            break;
        }

    } while (op != 0);

    return 0;
}