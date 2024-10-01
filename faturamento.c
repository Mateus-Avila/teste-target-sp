#include <stdio.h>

int main(int argc, char const *argv[]) {
    double faturamento_diario[30] = {
        22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 
        42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 
        2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 
        18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 
        13220.495, 8414.61
    };

    double menor_faturamento = -1, maior_faturamento = -1, soma_faturamento = 0;
    int dias_com_faturamento = 0, dias_acima_da_media = 0, num_dias = 30;

    for (int i = 0; i < num_dias; i++) {
        double faturamento = faturamento_diario[i];

        if (faturamento == 0) {
            continue;
        }

        if (menor_faturamento == -1 || faturamento < menor_faturamento) {
            menor_faturamento = faturamento;
        }

        if (maior_faturamento == -1 || faturamento > maior_faturamento) {
            maior_faturamento = faturamento;
        }

        soma_faturamento += faturamento;
        dias_com_faturamento++;
    }

    double media_faturamento = soma_faturamento / dias_com_faturamento;

    for (int i = 0; i < num_dias; i++) {
        double faturamento = faturamento_diario[i];

        if (faturamento > media_faturamento) {
            dias_acima_da_media++;
        }
    }

    printf("Menor faturamento: %.2f\n", menor_faturamento);
    printf("Maior faturamento: %.2f\n", maior_faturamento);
    printf("Média de faturamento: %.2f\n", media_faturamento);
    printf("Dias com faturamento acima da média: %d\n", dias_acima_da_media);

    return 0;
}
