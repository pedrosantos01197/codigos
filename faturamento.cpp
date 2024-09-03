#include <stdio.h>

typedef struct {
    int dia;
    float valor;
} Faturamento;

main() {
	
    Faturamento faturamentos[] = {
        {1, 22174.1664}, {2, 24537.6698}, {3, 26139.6134}, {4, 0.0}, {5, 0.0}, {6, 26742.6612}, {7, 0.0},
        {8, 42889.2258}, {9, 46251.174}, {10, 11191.4722}, {11, 0.0}, {12, 0.0}, {13, 3847.4823}, {14, 373.7838},
        {15, 2659.7563}, {16, 48924.2448}, {17, 18419.2614}, {18, 0.0}, {19, 0.0}, {20, 35240.1826}, {21, 43829.1667},
        {22, 18235.6852}, {23, 4355.0662}, {24, 13327.1025}, {25, 0.0}, {26, 0.0}, {27, 25681.8318}, {28, 1718.1221},
        {29, 13220.495}, {30, 8414.61}
    };
    
    int numDias = sizeof(faturamentos) / sizeof(faturamentos[0]);
    
    float menorValor = faturamentos[0].valor;
    float maiorValor = faturamentos[0].valor;
    
    float somaFaturamento = 0.0;
    
    int diasComFaturamento = 0;
    int diasAcimaDaMedia = 0;

    for (int i = 0; i < numDias; i++) {
        if (faturamentos[i].valor > 0) {
            if (faturamentos[i].valor < menorValor) {
                menorValor = faturamentos[i].valor;
            }
            if (faturamentos[i].valor > maiorValor) {
                maiorValor = faturamentos[i].valor;
            }
            somaFaturamento += faturamentos[i].valor;
            diasComFaturamento++;
        }
    }

    float mediaMensal = somaFaturamento / diasComFaturamento;

    for (int i = 0; i < numDias; i++) {
        if (faturamentos[i].valor > mediaMensal) {
            diasAcimaDaMedia++;
        }
    }

    printf("Menor valor p/dia do mes: %.2f\n", menorValor);
    printf("Maior valor p/dia do mes: %.2f\n", maiorValor);
    printf("Dias com faturamento superior a media mensal: %d\n", diasAcimaDaMedia);
}

