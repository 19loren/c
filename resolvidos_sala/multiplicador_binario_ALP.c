#include <stdio.h>

// converter um número decimal para binário de 8 bits
void decimalToBinary(unsigned int decimal, int *binary) {
    // Inicialize todos os bits como zero
    for (int i = 7; i >= 0; i--) {
        binary[i] = decimal % 2;
        decimal /= 2;
    }
}

// exibir a tabela de multiplicação de 8 bits
void printTable(unsigned int multiplicand, unsigned int multiplier) {
    int multiplicandBinary[8], multiplierBinary[8], productBinary[8];

    decimalToBinary(multiplicand, multiplicandBinary);
    decimalToBinary(multiplier, multiplierBinary);

    unsigned int product = 0;
    printf("\n   i | Multiplicando | Multiplicador |   Produto\n");
    printf("-----+---------------+----------------+----------\n");

    for (int i = 0; i < 8; i++) {
        decimalToBinary(product, productBinary);

        printf("  %2d |    ", i);
        for (int j = 0; j < 8; j++) {
            printf("%d", multiplicandBinary[j]);
        }

        printf("    |    ");
        for (int j = 0; j < 8; j++) {
            printf("%d", multiplierBinary[j]);
        }

        printf("    |    ");
        for (int j = 0; j < 8; j++) {
            printf("%d", productBinary[j]);
        }

        printf("\n");

        // se o bit menos significativo do multiplicador for 1, soma o multiplicando ao produto
        if (multiplier & 1) {
            product += multiplicand;
        }

        multiplicand <<= 1;
        multiplier >>= 1;
    }

    printf("-----+---------------+----------------+----------\n");

    decimalToBinary(product, productBinary);

    printf("\nResultado em binario: ");
    for (int i = 0; i < 8; i++) {
        printf("%d", productBinary[i]);
    }

    printf("\nResultado em decimal: %u\n", product);
}

int main() {
    unsigned int multiplicand, multiplier;

    printf("Insira o multiplicando: ");
    scanf("%u", &multiplicand);
    printf("Insira o multiplicador: ");
    scanf("%u", &multiplier);

    printTable(multiplicand, multiplier);

    return 0;
}
