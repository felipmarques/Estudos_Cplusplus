#include <stdio.h>
#include <locale.h>

int main(){
    int lado_um;
    int lado_dois;
    int perimetro;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o valor do primeiro lado");
    scanf("%d", &lado_um);
    printf("Digite o valor do segundo lado");
    scanf("%d", &lado_dois);
    perimetro = (lado_um * 2) + (lado_dois * 2);
    printf("O valor do perímetro é igual aa %d", perimetro);

    return 0; 
}