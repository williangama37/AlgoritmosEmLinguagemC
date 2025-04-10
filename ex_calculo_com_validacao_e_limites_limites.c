/* Exercicio - Curso WR Kits - Linguagem C - módulo 5
Projete um código em C para receber a entrada de um número inteiro 
positivo de 16 bits (deverá ser compatível entre máquinas diferentes) e o sistema calcule:
- O valor do número somado a 1;
- O valor do número subtraído em 1;
- A soma de todos os valores envolvidos;
- O quadrado da soma de todos os valores envolvidos.
O sistema deve apresentar o limite de valor igual a 85. Caso o usuário digite um valor maior que 
85, deverá gerar mensagem de erro.
Exemplo:
O usuário entra com 12;
O sistema mostra os resultados 11, 13 e 36 e 1296.*/

#include <stdio.h>
#define LIMITE 85

int main()
{

    unsigned short int num = 86, sub = 0, add = 0, add_total=0, expo = 0;
    int c;
    
    /*Verificação*/
    do{
        printf("Digite o numero: ");
        if (scanf("%hd", &num) != 1) {
            printf("Erro: Entrada invalida. Insira apenas numeros.\n");
            while((c = getchar()) != '\n' && c != EOF){
                /*limpa o buffer*/
                }
            } else if (num > LIMITE || num < 0) {
                printf("Erro: Valor fora do limite (0-%d). Tente novamente.\n", LIMITE);
                while((c = getchar()) != '\n' && c != EOF){
                /*limpa o buffer*/
                }
            }
    } while(num > LIMITE || num < 0);
    
    /*Calculo*/
    sub = num-1;
    add = num+1;
    add_total = num+add+sub;
    expo = add_total*add_total;
    printf("\nNumero.......: %hd", num);
    printf("\nSubtracao....: %hd", sub);
    printf("\nSoma.........: %hd", add);
    printf("\nSoma valores.: %hd", add_total);
    printf("\nExponenciacao: %hd", expo);
    printf("\n---------------------");
    printf("\nTamanho em bytes: %ld", sizeof(num));
    printf("\nTamanho em bits.: %ld \n", sizeof(num)*8);
    
    /*Encerrando*/
    printf("\nPressione Enter para sair...\n");
    while(getchar() != '\n');
    getchar();
  
    return 0;
}
