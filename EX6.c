#include <stdio.h>

void main()
{
    int i, j, maior, posMaior, menor, posMenor, n[5];
    
    for(i=0;i<=4;i++)
    {
        printf("Insira um valor para a posicao [%d]: ",i);
        scanf("%d",&n[i]);
    }
   maior = n[0];
   posMaior =0;
   for (i=1;i<=4;i++)
   {
            if (n[i]>maior)
            {
             maior = n[i];
             posMaior = i;
            }
    }
    menor = n[0];
    posMenor = 0;
    for (i=1;i<=4; i++)
    {
        if (n[i]< menor)
        {
            menor = n[i];
            posMenor = i;
        }
    }
    printf("\nO maior e: %d na posicao [%i]\n", maior, posMaior);
    printf("O menor e: %d na posicao [%i]", menor, posMenor);
}
