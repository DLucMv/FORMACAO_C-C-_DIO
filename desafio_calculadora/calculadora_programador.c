#include <stdio.h>
#include <stdlib.h>

long decimalParaBinario(long num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 2 + 10 * decimalParaBinario(num / 2));
    }
}


void decimalParaHexadecimal(int num) {
    if (num == 0) {
        return;
    }
    decimalParaHexadecimal(num / 16);
    int remainder = num % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + remainder - 10);
    }
}


int main() {
    char operador;
    int opcaoBase;
    float num1, num2, resultado;

    printf("Escolha a base dos números (2 para binário, 10 para decimal, 16 para hexadecimal): ");
    scanf("%d", &opcaoBase);

    printf("Digite a operação que deseja realizar (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o primeiro número: ");
    if (opcaoBase == 2)
        scanf("%f", &num1);
    else if (opcaoBase == 16) {
        scanf("%x", (unsigned int *)&num1);
    } else
        scanf("%f", &num1);

    printf("Digite o segundo número: ");
    if (opcaoBase == 2)
        scanf("%f", &num2);
    else if (opcaoBase == 16) {
        scanf("%x", (unsigned int *)&num2);
    } else
        scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: divisão por zero!\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido!\n");
            return 1;
    }

    printf("Resultado: ");
    if (opcaoBase == 2)
        printf("%.2f\n", resultado);
    else if (opcaoBase == 16) {
        printf("0x");
        decimalParaHexadecimal((int)resultado);
        printf("\n");
    } else
        printf("%.2f\n", resultado);

    return 0;
}
