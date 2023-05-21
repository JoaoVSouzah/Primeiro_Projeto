//Faca um programa que preencha um vetor com 10 numeros reais, calcule e mostre a
//quantidade de numeros negativos e a soma dos numeros positivos desse vetor.

#include <stdio.h>

int main()
{
    float numNegativo=0, somaPositivo, n[10];
    int i;
    for(i=0;i<=9;i++)
    {
        scanf("%f",&n[i]);
        if(n[i]<0)
        {
            numNegativo++;
        }
        if(n[i]>0)
        {
            somaPositivo += n[i];
        }
    }
    for(i=0;i<=9;i++)
    {
        printf(" %.2f",n[i]);
    }
    printf("\nPossui %.f numeros negativos\nA soma dos positivos e: %.2f",numNegativo,somaPositivo);
}