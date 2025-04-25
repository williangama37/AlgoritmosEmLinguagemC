/******************************************************************************

A função em C  calcular a frequência de um oscilador com o circuito integrado 555.
A função deve receber os parâmetros de entrada: Ra, Rb e C e imprimir o valor 
da frequência na tela. 
A equação é obtida do datasheet do CI 555:
𝑓 = 1,44 / (RA + 2RB) × C

*******************************************************************************/
#include <stdio.h>

void freq_555(float ra, float rb, float c);

int main()
{
    float ra,
          rb,
          c;
    /*Exemplos para testar
      ra 1000ohm, rb 10000ohm, c 1mF ou 1.0E-6 = 68,57Hz
      ra 4.7kOhm ou 4.7E3, rb 27kOhm ou 27.0E3, c 100nF ou 100E-9 = 245,31Hz*/
    printf("\nDigite o valor do resistor 1: ");
    scanf("%f", &ra);
    
    printf("\nDigite o valor do resistor 2: ");
    scanf("%f", &rb);
    
    printf("\nDigite o valor do capacitor: ");
    scanf("%f", &c);
    
    freq_555(ra, rb, c);

    return 0;
}

void freq_555(float ra, float rb, float c){
    float freq;
    
    freq = 1.44/((ra+2*rb)*c);
    printf("Frequencia = %.2fHz\n", freq);
}
