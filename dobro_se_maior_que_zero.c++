#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor;
    int dobro;

    printf("Digite um número inteiro:");
    scanf("%d",&valor);
    if (valor <= 0){
        printf("Valor entrado Inválido");
    }
    else{
        dobro = valor * 2;
        printf("O dobro do valor digitado é %d", dobro);
    }

    return 0;
}