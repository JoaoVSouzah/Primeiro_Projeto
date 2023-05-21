//Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores ˆ
//lidos na ordem inversa.

#include <stdio.h>

int main()
{
    int i,n[6];
    

    printf("Digite 6 valores que sejam pares\n");
    for(i=0;i<=5;i++)
    {
        scanf("%i",&n[i]);
        if (n[i]%2 == 1)
        {
            do
            {
                printf("Este numero e impar: %i\nDigite numeros pares\n",n[i]);
                scanf("%i",&n[i]);
            }while(n[i]%2==1);
        }
        
    }
    printf("\n");
    for(i=5;i>=0;i--)
    {
        printf(" %i ",n[i]);
    }
    return 0;
}