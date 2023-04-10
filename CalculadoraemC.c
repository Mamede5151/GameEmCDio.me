#include <stdio.h>

int main() {
    int opcao;
    float numero1, numero2, resultado;

    printf("Calculadora Simples em C\n");
    printf("----------------------------\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("\nEscolha uma opção:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}
