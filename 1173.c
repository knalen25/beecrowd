#include <stdio.h>

int main(){

    int valor, vetor[10];

    scanf("%d", &valor);
    vetor[0] = valor;

    for (int posicao = 1; posicao<10 ; posicao++)
    {
        vetor[posicao] = vetor[posicao - 1] * 2;
    }

    for (int posicao = 0; posicao < 10; posicao++)
    {
        printf("N[%d] = %d\n",  posicao, vetor[posicao]);
    }
    
    
}
