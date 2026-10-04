#include <stdio.h>

int main(void){
	
	int contador = 1;
	
	while (contador <= 5){
		printf("%d\n", contador);
		contador = contador + 1;
	}
	
	int numero;
	
	do {
		printf("Digite um numero positivo: ");
		scanf("%d", &numero);
	} while (numero <= 0);
	
	for (int i = 1; i<= 5; i = i + 1){
		printf("%d\n", i);
	}
	
	return 0;
}
