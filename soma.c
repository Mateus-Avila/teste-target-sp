#include <stdio.h>

int main(int argc, char const *argv[])
{

    int indice = 13, soma = 0, k = 0;

    while(k < indice) {
        k++;
        soma = soma + k;

        printf("Loop : %i\n", k-1);
        printf("k = %i\n", k);
        printf("soma = %i\n\n", soma);
    }

    return 0;
}
