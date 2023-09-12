#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor_um;
	int valor_dois;
	int maior;
	
	printf("Digite o primeiro valor:");
	scanf("%d",&valor_um);
	printf("Digite o segundo valor:");
	scanf("%d", &valor_dois);
	
	if (valor_um > valor_dois){
		maior = valor_um;
	}
	else{
		maior = valor_dois;
	}
	printf("O maior valor é %d", maior);
	
	return 0;
}
