/*=================================================================================
Autor: Willian Gama
Exercício: a função imprime o valor da frequência de corte de um filtro passa-baixas,
onde o usuário entrará com os parâmetros: R, C e ‘F’. A equação é a que segue:
𝑓 = 1/(2𝜋RC)
A mesma função deverá calcular e imprimir na tela o valor da constante de tempo, 
resultado do produto de R e C, caso o usuário entre com R, C e ‘T’.
A equação é a que segue:
𝜏 = RC
Curso: WR Kits, curso de C definitivo. Ministrado pelo Dr. Eng. Wagner Rambo
Módulo 6, aula 1 Parâmetros de funções
Data: 26/04/2025
===================================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void filtro(float resistencia, float capacitancia, char opcao);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float resistencia, capacitancia;
    char opcao;
    
    printf("Filtro passa-baixas\n");
    printf("Informe o valor da resistência (em ohms): ");
    scanf("%f", &resistencia);
    printf("Informe o valor da capacitância (em farads): ");
    scanf("%f", &capacitancia);
    getchar();
    printf("Digite F para frequência, T para tempo, B para ambos: ");
    scanf("%c", &opcao);
    
    if (resistencia <= 0 || capacitancia <= 0) {
        printf("Erro: Resistência e capacitância devem ser maiores que zero!\n");
        return 1;
    }
    
    filtro(resistencia, capacitancia, opcao);
    return 0;
}

void filtro(float resistencia, float capacitancia, char opcao) {
    float frequencia, tempo;
    
    switch(opcao) {
        case 'f':
        case 'F':
            frequencia = 1/(2*M_PI*resistencia*capacitancia);
            printf("Frequência de corte: %.2f Hz\n", frequencia);
            break;
        case 't':
        case 'T':
            tempo = resistencia*capacitancia;
            printf("Constante de tempo: %f segundos\n", tempo);
            break;
        case 'b':
        case 'B':
            frequencia = 1/(2*M_PI*resistencia*capacitancia);
            tempo = resistencia*capacitancia;
            printf("Frequência de corte: %.2f Hz\n", frequencia);
            printf("Constante de tempo: %f segundos\n", tempo);
            break;
        default:
            printf("Erro: Opção inválida! Use F, T ou B.\n");
            break;
    }
}
