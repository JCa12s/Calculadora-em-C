#include "funcoes.h"

// Fase de execução do programa
int main()
{
    float a, b;
    int opcao;
    
    printf("Calculadora Simples\n");
    printf("Escolha uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Percentagem\n");
    scanf("%d", &opcao);
    if (opcao < 1 || opcao > 5) {
        printf("Opção inválida! Por favor, escolha uma opção entre 1 e 4.\n");
        return 1; // Exit the program with an error code
    }

    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    switch(opcao)
    {
        case 1:
            adicao(a, b);
            break;
        case 2:
            subtracao(a, b);
            break;
        case 3:
            multiplicacao(a, b);
            break;
        case 4:
            divisao(a, b);
            break;
        case 5:
            percentagem(a, b);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}