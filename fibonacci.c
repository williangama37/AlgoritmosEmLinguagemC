#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int anterior = 0, atual = 1, proximo;

    printf("Sequência de Fibonacci até 1000:\n");
    printf("%d\n", anterior);

    while (atual <= 1000) {
        printf("%d\n", atual);
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }

    return 0;
}
