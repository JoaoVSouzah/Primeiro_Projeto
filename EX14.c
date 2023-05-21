//Fac¸a um programa que leia um vetor de 10 posic¸oes e verifique se existem valores iguais ˜
//e os escreva na tela.
//O algoritimo depois que fizer o primeiro laço ele não pode volta fazer novamento o laço iniciando a comparação do indice 0 e sim do 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, valores_iguais, quantidade_valores=0, n[10];
    srand(time(NULL));
    for (i=0;i<=9;i++)
    {
        n[i] = rand()%10;
        //scanf("%i",&n[i]);
    }
    printf("\n");
    for(i=0;i<=9;i++)
    {
        printf("[%i]%i ",i,n[i]);
    }
    printf("\n");   
    for(j=0;j<=9;j++)
    {    
        for(i=j+1;i<=9;i++)
        {
            if(n[j] == n[i])
            {
                valores_iguais = n[j];
                quantidade_valores++;
                printf("Numero(s) repetido(s): %i\n",valores_iguais);
            }
        }
    }
    printf("\nQuantidade de numeros iguais %i",quantidade_valores);
    return 0 ;
}