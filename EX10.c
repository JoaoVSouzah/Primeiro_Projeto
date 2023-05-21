//Faca um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
//e imprima a media geral. 

#include <stdio.h>

int main()
{
    float nota[15], mediaGeral;
    int i, quantidade_de_Notas;
    printf("Insira as notas\n");
    for(i=0;i<=14;i++)
    {
        scanf("%f",&nota[i]);
        quantidade_de_Notas++;
        mediaGeral += nota[i];
    }
    mediaGeral = mediaGeral / quantidade_de_Notas;
    printf("\nMedia geral: %.2f",mediaGeral);
}