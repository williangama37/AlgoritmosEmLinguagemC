/*Imprimir o mapa de uma memória que tem 64 bytes de endereços. Os 6 primeiros endereços devem ter os dados 00h, 01h, 02h, 03h, 04h, 05h, 
e todos os restantes FFh, considerando que cada linha terá 16 bytes.
WR Kits - Linguagem C. Módulo 5, aula 5*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char     done = 0;
    unsigned linha, coluna;
    
    for(linha=0;linha<4;linha++){
        
        for(coluna=0;coluna<16;coluna++)
            if(coluna<6 && !done)   printf("%2Xh ", coluna);
            else    printf("FFh ");
            done = 1;
    
    putchar('\n'); /*concluir a linha*/
    }
	system("PAUSE");
  return 0;
}
