#include <stdio.h>
#include <locale.h>

int main(){
    int lado;
    int perimetro;
    printf("Digite o valor do lado do quadrado:");
    scanf("%d", &lado);
    perimetro = lado * 4;
    printf("O perimetro do quadrado vale %d", perimetro);

    return 0;
}
