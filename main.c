#include <stdio.h>

//Fase inicialização das funções de operações matemáticas
// Função de adição
void adicao(float a, float b)
{
    float resultado = a + b;
    printf("Resultado: %0.2f\n", resultado);
    return;
}

// Função de subtração
void subtracao(float a, float b)
{
    float resultado = a - b;
    printf("Resultado: %0.2f\n", resultado);
    return;
}

// Função de multiplicação
void multiplicacao(float a, float b)
{
    float resultado = a * b;
    printf("Resultado: %0.2f\n", resultado);
    return;
}

// Função de divisão
void divisao(float a, float b)
{
    float resultado = a / b;
    printf("Resultado: %0.2f\n", resultado);
    return;
}

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
    scanf("%d", &opcao);
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
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}