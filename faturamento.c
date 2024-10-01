#include <stdio.h>

int main(int argc, char const *argv[]) {
    double faturamento_diario[30] = {
        1000.0, 0.0, 500.0, 0.0, 700.0, 1200.0, 300.0, 0.0, 850.0, 0.0, 400.0, 950.0, 0.0, 1200.0, 0.0, 1300.0, 0.0, 0.0, 800.0, 1500.0, 600.0, 0.0, 0.0, 750.0, 1400.0, 0.0, 1000.0, 0.0, 1700.0, 0.0};
 
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
    printf("Dias com faturamento acima da média: %d\n", dias_acima_da_media);

    return 0;
}
