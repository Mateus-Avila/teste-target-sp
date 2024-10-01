#include <stdio.h>

//Usei struct para organizar melhor os dados
struct Estado{
        char nome[10];
        double faturamento;
    };

int main(int argc, char const *argv[])
{
    struct Estado estados[] = {
        {"SP", 67836.43},
        {"RJ", 36678.66},
        {"MG", 29229.88},
        {"ES", 27165.48},
        {"Outros", 19849.53}
    };

    int num_estados = 5;
    double faturamento_total = 0;

    for (int i = 0; i < num_estados; i++) {
        faturamento_total += estados[i].faturamento;
    }

    printf("Percentual de representacao por estado:\n");
    for (int i = 0; i < num_estados; i++) {
        double percentual = (estados[i].faturamento / faturamento_total) * 100;
        printf("%s: %.2f%%\n", estados[i].nome, percentual);
    }

    return 0;
}
