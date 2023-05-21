//Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
//na ordem inversa.

#include <stdio.h>

int main()
{
    int j, n[6];

    for(j=0;j<=5;j++)
    {
        scanf("%i",&n[j]);
    }
    
    for (j=0;j<=5;j++)
    {
        printf(" %i ",n[j]);
    }
    printf("\n");
    for (j=5;j>=0;j--)
    {
        printf(" %i ",n[j]);
    }
    
}