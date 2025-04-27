/* =====================================================================================
    Autor: Willian Gama da Silva

	Um processador tem um conversor AD de 10 bits, portanto o range vai de 0 a 1023.
	Implemente uma função que receba um valor de 0 a 1023 e retorne um valor linearmente 
	proporcional para 8 bits, isto é, de 0 a 255.
	
	Curso: WR Kits, curso de C definitivo. Ministrado pelo Dr. Eng. Wagner Rambo
  Módulo 6, aula 2 Funções Que Retornam Valores
  Data: 26/04/2025
======================================================================================= */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ad8(int ad10);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int valor_ad10 = -1;
    int c; /*auxiliar para limpar o buffer*/

    do {
        printf("\nDigite a Codificação Binária entre 0 e 1023: ");
        if (scanf("%d", &valor_ad10) != 1 || valor_ad10 > 1023 || valor_ad10 < 0) {
            printf("Entrada inválida. Tente novamente.\n");
            while ((c = getchar()) != '\n' && c != EOF);
        } else {
            break; // Sai do loop se a entrada for válida
        }
    } while (1);

    printf("\nValor convertido em 8 bits: %d\n", ad8(valor_ad10));

    printf("Pressione ENTER para sair...\n");
    getchar();
    return 0;
}

int ad8(int ad10) {
    return (int)((ad10 * 255.0 / 1023) + 0.5);
}
