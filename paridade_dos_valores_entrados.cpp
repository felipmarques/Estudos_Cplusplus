#include <stdio.h>
#include <locale.h> 

int main() {
    int L1;
    int L2; 
    int area;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &L1);
    printf("Digite o valor do segundo lado: ");
    scanf("%d", &L2);
    
    if (L1 % 2 == 0 && L2 % 2 == 0) {
        area = L1 * L2;
        printf("O valor da �rea � %d\n", area);
    } else {
        printf("Ou � mais valores inseridos s�o �mpares. Programa encerrado.\n");
    }
    
    return 0;
}

