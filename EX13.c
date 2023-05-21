//Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
//tram o maior e o menor valor.

#include <stdio.h>

int main()
{
    int i , n[5], maior, posMaior=0, menor, posMenor=0;
    for(i=0;i<=4;i++)
    {
        scanf("%i",&n[i]);
    }
    maior = n[0];
    menor = n[0];
    for(i=1;i<=4;i++)
    {
        if(n[i]>maior)
        {
            maior = n[i];
            posMaior = i;
        }
        if(n[i]<menor)
        {
            menor = n[i];
            posMenor = i;
        }
    }
    for(i=0;i<=4;i++)
    {
        printf(" [%i]%i ",i,n[i]);
    }
    printf("\nPosicao do numero maior [%i]\nPosicao do numero menor[%i]",posMaior,posMenor);

}