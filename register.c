#include <stdio.h>
#include <stdlib.h>

/* Esse código solicita ao usuário que insira um valor hexadecimal entre 00h e FFh no registrador denominado regist.
Depois, verifica se o valor armazenado é diferente de zero (se há algum valor carregado no registrador).
Caso seja diferente de zero, ele define regist como 0x80, caso contrário, ele mantém o valor 0x00 */

int main(int argc, char *argv[]) {
    unsigned char regist = 0x00;
    printf("Carregue um valor entre 00h a FFh no registrador: ");
    scanf("%X", &regist);

	printf("Valor lido: %Xh\n", regist);    
    regist = regist ? 0x80 : 0x00;
    printf("Valor corrigido: %Xh\n", regist);
    
    getchar();
    getchar();

    return 0;
}
