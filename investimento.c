/*=================================================================================
Autor: Willian Gama
Exercício: desenvolva um projeto em C onde o usuário define um valor 
máximo de aporte para a bolsa de valores. Após, ele entra com o valor de 5 ações (que devem 
ser armazenados em um vetor) e a quantidade para cada ativo. O sistema imprime o valor total 
em dinheiro e soa um alerta caso o aporte seja menor que o total. 

Exemplo: o usuário entre com um aporte de $ 2500,00.
Ativos hipotéticos
EMPA3F: $ 12,95 Qtd 30
EMPB4F: $ 19,45 Qtd 14
EMPC3F: $ 22,12 Qtd 50
EMPD3: $ 11,23 Qtd 100
EMPE4: $ 32,40 Qtd 200
Multiplicando cada valor pela quantidade e somando tudo, o resultado é $ 9369,80. 
Portanto, o alerta será emitido, pois o aporte é menor.

Curso: WR Kits, curso de C definitivo. Ministrado pelo Dr. Eng. Wagner Rambo
Módulo 7, aula 0 Vetores
Data: 01/05/2025
===================================================================================*/
#include <stdio.h>
#include <stdlib.h>

#define ATIVOS 5

float verificar();
int verificar_inteiro();

int main()
{
    register int i;
    float aporte, total, valor[ATIVOS], subto[ATIVOS];
    int qtd[ATIVOS];
    char opt;
    
    do {
        total = 0;
        printf("INSIRA O VALOR DO APORTE: ");
        aporte = verificar();
        putchar('\n');
        
        for (i = 0; i < ATIVOS; i++) {
            printf("Ativo %d: R$", i+1);
            valor[i] = verificar();
            printf("Quantidade: ");
            qtd[i] = verificar_inteiro();
            putchar('\n');
            
            subto[i] = valor[i] * qtd[i];
            total += subto[i];
        }
        
        printf("\nTotal: R$%.2f\n", total);
        
        if (aporte < total) {
            printf("\nO valor do aporte \x82 insuficiente.\a\n");
        } else {
            printf("Aporte suficiente.\n");
        }
        
        printf("Calcular novamente?\n");
        printf("(s) sim | (n) nao >>> ");
        scanf(" %c", &opt);
        
    } while (opt != 'n' && opt != 'N');
    
    return 0;
}

float verificar() {
    float valor;
    int c;
    
    do {
        if (scanf("%f", &valor) != 1 || valor < 0) {
            while ((c = getchar()) != '\n' && c != EOF); // Limpa buffer
            printf("Valor invalido. Tente novamente: ");
        } else {
            break;
        }
    } while (1);
    
    return valor;
}

int verificar_inteiro() {
    int valor, c;
    
    do {
        if (scanf("%d", &valor) != 1 || valor < 0) {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Valor invalido. Tente novamente: ");
            
        } else {
            break;
        }
    } while (1);
    
    return valor;
}
