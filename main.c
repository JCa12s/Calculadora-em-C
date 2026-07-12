#include <unistd.h>

//Fase inicialização das funções de operações matemáticas
// Função de adição
void adicao(int a, int b)
{
    return a + b;
}

// Função de subtração
void subtracao(int a, int b)
{
    return a - b;
}

// Função de multiplicação
void multiplicacao(int a, int b)
{
    return a * b;
}

// Função de divisão
void divisao(int a, int b)
{
    return a / b;
}

// Fase de execução do programa
int main()
{
    int a = 10;
    int b = 5;

    adicao(a, b);
    subtracao(a, b);
    multiplicacao(a, b);
    divisao(a, b);

    return 0;
}