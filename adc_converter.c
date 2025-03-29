/* =====================================================================================
    Autor: Willian Gama da Silva

	O algorítimo lê a Codificação Binária de um conversor analógico/digital(ADC) de 0-5v
	com resolução de 10 bits (2^10, 1024), e converte para o valor correspondente ao sinal
	analógico.
======================================================================================= */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_adc = -1;
    float analogico;
    int c; /*auxiliar para limpar o buffer*/

    do {
        printf("Digite a Codificação Binária entre 0 e 1023 (valor convertido para digital): ");
        if ((scanf("%d", &valor_adc)) != 1 || valor_adc > 1023 || valor_adc < 0){
            printf("Entrada inválida. Tente novamente.\n");
            while((c = getchar()) != '\n' && c != EOF){
                /*Limpa o buffer.
                  EOF é uma constante em C que significa End Of File*/
            }
            /*A função Scanf retorna o número de entradas válidas, portanto,caso retorne um valor
            diferente de 1, significa que não foi um valor inteiro*/
            valor_adc = -1;
        }
    } while (valor_adc > 1023 || valor_adc < 0);

    analogico = (float)((valor_adc * 5.0) / 1023.0);
    printf("O valor correspondente é %.2f volts\n", analogico);

    printf("Pressione ENTER para sair...\n");
    getchar();
    getchar();
    return 0;
}
