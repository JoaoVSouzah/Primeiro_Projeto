/*Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado dos ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.*/
#include <stdio.h>
#include <math.h>

int main()
{
    float vetor1[10],vetor2[10];
    int i;

    for(i=0;i<=9;i++)
    {
        scanf("%f",&vetor1[i]);
        vetor2[i] = pow(vetor1[i],2);
        //vetor2[i] = vetor1[i] * vetor1[i]; Assim tambem resolveria o problema.
    }
    for(i=0;i<=9;i++)
    {
        printf("Valores do vetor elevado ao quadrado pos[%i] = %6.2f\n",i,vetor2[i]);
    }
    return 0;
}
