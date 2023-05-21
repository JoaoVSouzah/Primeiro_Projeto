//Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, pares=0, n[10];
    srand(time(NULL));

    for (i=0;i<=9;i++)
    {
        //scanf("%i",&n[i]);
        n[i] = rand() % 50;
        if( n[i] % 2 == 0)
        {
            pares++;
        }
    }
    for (i=0;i<=9;i++)
    {
        printf("%i ",n[i]);
    }  
    printf("\n");
    printf("\nPossui %i valores pares, dentre os dez numeros gerados.\n",pares);
    return 0;
}