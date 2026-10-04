#include <stdio.h>

int main(void){
	
	int contador = 1;
	int soma = 0;
	
	while (contador <= 10){
		soma = soma + contador;
		contador = contador + 1;
	}
	
	printf("A soma e %d\n", soma);
	
	return 0;
}
