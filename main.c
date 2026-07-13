#include <stdio.h>

//Fase inicialização das funções de operações matemáticas
// Função de adição
void adicao(int a, int b)
{
    int resultado = a + b;
    printf("Resultado: %d\n", resultado);
    return;
}

// Função de subtração
void subtracao(int a, int b)
{
    int resultado = a - b;
    printf("Resultado: %d\n", resultado);
    return;
}

// Função de multiplicação
void multiplicacao(int a, int b)
{
    int resultado = a * b;
    printf("Resultado: %d\n", resultado);
    return;
}

// Função de divisão
void divisao(int a, int b)
{
    int resultado = a / b;
    printf("Resultado: %d\n", resultado);
    return;
}

// Fase de execução do programa
int main()
{
    int a, b, opcao;
    printf("Calculadora Simples\n");
    printf("Escolha uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    scanf("%d", &opcao);
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

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
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}