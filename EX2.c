/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos*/
#include <stdio.h>

int main()
{
    int i, vetor[6];

    for(i=0;i<=5;i++)
    {
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<=5;i++)
    {
        printf("Os valores inseridos foram %d\n",vetor[i]);
    }
    return 0;
}
