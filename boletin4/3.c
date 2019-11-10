/*ENUNCIADO

Escribir unha función int *PosNegativo(int *vector) que reciba un vector de enteiros e devolva mediante un punteiro a posición do primeiro valor negativo. Dende a función main() hai que imprimir o valor na posición devolta pola función no caso de que haxa algún valor negativo no vector, senón debe amosar unha mensaxe indicando que o vector non ten valores negativos.*/

/*Autor: Aldán Creo Mariño
Data: 10 de novembro de 2019
Versión: 1
Este programa busca o primeiro valor negativo nun vector de enteiros*/

#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define N 10

int *posNegativo(int *vector)
{
    int *i = vector;
    printf("\n\nIniciando busqueda:\n");
    printf("Buscarase dende a posicion de memoria 0x%p ata a 0x%p, con incrementos de %d.\n\n",vector, vector + sizeof(vector) * N, sizeof(vector));
    printf("Iteracion\tDireccion\t\tValor\n");

    while (*i >= 0 && ((sizeof(vector) * N) > ((i - vector)*sizeof(vector))))
    {
        printf("\n%d",(i-vector)*sizeof(vector));
        printf("\t\t0x%p",i);
        printf("\t\t%d",*i);
        i++;
    }

    if (*i < 0)
    {
        return i;
    }
    else
    {
        return NULL;
    }
}

int main()
{
    int vector[N];
    for (int i = 0; i < N; i++)
    {
        printf("Introduza o valor do elemento %d (en 0x%p): ", i+1, &vector[i]);
        scanf("%d", &vector[i]);
    }

    if (posNegativo(vector) != NULL)
    {
        printf("\n\nO valor gardado en 0x%p e %d", posNegativo(vector), *posNegativo(vector));
    }
    else
    {
        printf("\n\nNon se atopou ningun negativo no vector");
    }

    return (EXIT_SUCCESS);
}