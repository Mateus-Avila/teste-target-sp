#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n1 = 0, n2 = 1, proximo = 0, alvo, existe = 0, posicao = 3;

    printf("Digite o número que deseja saber se existe na sequência de Fibonacci: \n");
    scanf("%i", &alvo);

    printf("Sequencia: %i, %i", n1, n2);

    while (proximo <= alvo) {
        proximo = n1 + n2;
        printf(", %i", proximo);

        if (proximo == alvo) {
            existe = 1;
            break; 
        }

        n1 = n2;
        n2 = proximo;
        posicao++;
    }

    if (existe == 1) {
        printf("\nSeu número existe na sequência de Fibonacci, ele está na posição %i\n", posicao);
    } else {
        printf("\nSeu número não existe na sequência de Fibonacci.\n");
    }

    return 0;
}
