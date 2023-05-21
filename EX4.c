/*Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem 
dois valores X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final seu programa
devera escrever a soma dos valores encontrados nas respectivas posicoes ˜ X e Y .*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int i,j, x, y, vetor[8], soma;
    srand(time(NULL));

    for(i=0;i<=7;i++)
    {
        vetor[i] = rand()%7;
        //scanf("%d",&vetor[i]);
    }
    for(i=0;i<=7;i++)
    {
        printf(" [%i]%i ",i,vetor[i]);
    }
    printf("\n");
    printf("\n");
    i = rand()%7;
    j=i;
    vetor[i] = rand()%7;
    x = vetor[i];
    i = rand()%7;
    while(i==j)
    {
        i = rand()%7;
        j=i;
    }
    vetor[i] = rand()%7;
    y = vetor[i];
    printf(" X = [%i]%i ",i,x);
    printf(" Y = [%i]%i \n\n",j,y);
    soma = x+y;
    printf("Soma de X e Y = %i ",soma);

    return 0;
}

