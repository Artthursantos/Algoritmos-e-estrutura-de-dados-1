#include <stdio.h>

int main(void){
	
	int numero;
	int impar;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	impar = numero % 2;
	
	if (impar == 1) {
		printf("O numero %d e impar", numero);
	}
	
	else {
		printf("O numero %d e par", numero);
	}
	
	return 0;
}

