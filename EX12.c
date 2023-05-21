//Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
//juntamente com o maior, o menor e a media dos valores.

#include <stdio.h>

int main()
{
    int i, n[5], maior, posMaior=0, menor, posMenor=0, media=0, quantidade_valores=0;

    for(i=0;i<=4;i++)
    {
        scanf("%i",&n[i]);
        media += n[i];
        quantidade_valores++;
    }
    media = media/quantidade_valores;
    maior=n[0];
    menor=n[0];
    for (i=1;i<=4;i++)
    {
        if(n[i]>maior)
        {
            maior = n[i];
            posMaior=i;
        }
        if(n[i]<menor)
        {
            menor= n[i];
            posMenor=i;
        }
    }
    for ( i = 0; i<=4; i++)
    {
        printf(" [%i]%i ",i,n[i]);
    }
    printf("\nO maior [%i]%i\nO menor [%i]%i",posMaior,maior,posMenor,menor);
    printf("\nA media dos valores %i",media);
}