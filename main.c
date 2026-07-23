#include "funcoes.h"

// Fase de execução do programa
int main()
{
    float a, b;
    float resultado;
    int opcao;
    
    printf("Calculadora Simples\n");
    printf("Escolha uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Percentagem\n");
    scanf("%d", &opcao);

    while(1)
    {
        if (opcao < 1 || opcao > 5) {
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            printf("Digite a opção novamente: ");
            scanf("%d", &opcao);
            continue; // Volta para o início do loop para solicitar a opção novamente;
        }
        else {
            break; // Opção válida, sai do loop;
        }
    }

    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    switch(opcao)
    {
        case 1:
            resultado = adicao(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtracao(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicacao(a, b);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            resultado = divisao(a, b);
            if (b == 0)
                printf("Erro: Divisão por zero não é permitida, BURRO(A)!\n");
            else
                printf("Resultado: %.2f\n", resultado);
            break;
        case 5:
            resultado = percentagem(a, b);
            if (b == 0)
                printf("Erro: Percentagem de zero não é permitida, BURRO(A)!\n");
            else
                printf("Resultado: %.2f%%\n", resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}