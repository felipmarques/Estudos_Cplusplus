/*Codificar um programa com a linguagem C, para a leitura de um valor numérico inteiro que corresponde ao lado de um quadrado.  

Caso o número seja ímpar, o algoritmo deverá enviar a mensagem “Valor Inválido” e encerrar. Caso contrário, o programa deverá exibir em tela o resultado do área do quadrado.*/

#include <stdio.h>
#include <locale.h> 

int main(){
    int lado;
    int area;
    setlocale(LC_ALL, "Portuguese" );

    printf("Digite o valor do lado do quadrado:");
    scanf("%d", &lado);
    if (lado%2 == 0){
        area = lado * lado;
        printf("A área do quadrado é igual a %d", area);
    }
    else{
        printf("Valor Inválido. Programa encerrado");
    }

    return 0;
}
