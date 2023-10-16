#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Digite um número para encontrar a posição e os números mais próximos na sequência de Fibonacci: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um número não negativo.\n");
        return 1;
    }

    int num_anterior = 0;
    int num_atual = 1;
    int posicao = 0;

    while (num_atual < numero) {
        int proximo = num_anterior + num_atual;
        num_anterior = num_atual;
        num_atual = proximo;
        posicao++;
    }

    printf("O número %d está na posição %d da sequência de Fibonacci.\n", numero, posicao);
    printf("Os números mais próximos na sequência de Fibonacci são: %d e %d.\n", num_anterior, num_atual);

    return 0;
}