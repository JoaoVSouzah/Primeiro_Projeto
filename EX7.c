//Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
//o vetor, o maior elemento e a posiccao que ele se encontra. 

#include <stdio.h>

int main()
{
    int i, maior, posMaior, n[10];

    for(i=0;i<=9;i++)
    {
        scanf("%i",&n[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf(" %i ",n[i]);
    }
    maior= n[0];
    posMaior = 0;

    for (i=1;i<=9;i++)
    {
        if(n[i]>maior)
        {
            maior = n[i];
            posMaior = i;
        }
    }
    printf("\nO maior numero: %i na posicao[%i]",maior, posMaior);
}   