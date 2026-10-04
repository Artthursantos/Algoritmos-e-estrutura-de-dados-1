#include <stdio.h>

int main(void){

int numero;
int negativos = 0;

for (int i = 1; i <= 10; i = i + 1) {
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        negativos = negativos + 1;
    }
}

printf("Quantidade de negativos: %d\n", negativos);

return 0;

}
