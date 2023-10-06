#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;
    int resultado;
    int contador;
    printf("Digite o número que deseja encontrar o fatorial:");
    scanf("%d", &numero);
    contador = numero - 1;
    resultado = numero;

    for(int i =1 ; i < numero; i++){
        resultado = resultado * contador;
        contador -= 1;
    }
    printf("O fatorial de %d é %d", numero, resultado);

}