#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int c;

void main(){
    printf("Programa que troca valores de lugar: \n");

    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("O primeiro valor e de: %d\n", a);
    printf("O segundo valor e de: %d\n\n", b);
}
