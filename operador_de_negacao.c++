#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i=7, j=7;

    int result;

    result =  !(i-j) + 1;

    printf("\n\nresult = %d", result);

    return 0;
}