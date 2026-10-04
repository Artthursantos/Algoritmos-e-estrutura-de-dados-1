#include <stdio.h>

int ehPar(int numero)
{
    return numero % 2 == 0;
}

int main(void)
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int resultado = ehPar(numero);

    if (resultado == 0) {
        printf("E impar");
    } else {
        printf("E par");
    }

    return 0;
}
