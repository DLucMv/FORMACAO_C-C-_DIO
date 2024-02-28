#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite a operação que deseja realizar (+, -, *, /): ");
    if (scanf(" %c", &operador) != 1) {
        printf("Erro ao ler o operador.\n");
        return 1;
    }
    printf("Digite o primeiro número: ");
     if (scanf("%f", &num1) != 1) {
        printf("Erro ao ler o primeiro número.\n");
        return 1;
    }
    
    printf("Digite o segundo número: ");
    if (scanf("%f", &num2) != 1) {
        printf("Erro ao ler o segundo número.\n");
        return 1;
    }

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }

    return 0;
}
