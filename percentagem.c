#include "funcoes.h"

float percentagem(float a, float b)
{
    float constante_one_hundred;
    float calculo_perc;
    
    constante_one_hundred = 100;
    calculo_perc = (a * b) / 100;
    return calculo_perc;
}