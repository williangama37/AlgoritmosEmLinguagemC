/* =====================================================================================
    Linguagem C, o curso definitivo - Módulo 4 Aula 5
    O Operador Condicional interrogação (?)
    Autor: Willian Gama da Silva
    Data:  Fevereiro de 2024

	O algorítimo lê um valor inteiro para tensão e retorna um alerta ao usuário 
via console caso a bateria esteja abaixo de 10 Volts, ou ok caso esteja acima desse valor.
======================================================================================= */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int volt;
    printf("Digite a tensao em Volt: ");
    scanf("%d", &volt);
    
    volt < 10 ? 
                printf("\nO nivel de tensao esta baixo.\n"):
                printf("\nO nivel de tensao esta ok.\n");
	system("PAUSE");
  return 0;
}
