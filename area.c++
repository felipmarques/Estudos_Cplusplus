#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int lado;
    int area;

    printf("Digite o lado do quadrado:");
    scanf("%d", &lado);
    area = lado * lado;
    printf("O valor da área do quadrado é igual a %d", area);

    return 0;

}