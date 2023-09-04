#include <stdio.h>
#include <locale.h>

int main(){
    int lado_um;
    int lado_dois;
    int area;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o valor do primeiro lado do retângulo");
    scanf("%d", &lado_um);
    printf("Digite o valor do segundo lado do retângulo");
    scanf("%d", &lado_dois);
    area = lado_um * lado_dois;
    printf("A área do retângulo vale %d", area);

    return 0;
}

