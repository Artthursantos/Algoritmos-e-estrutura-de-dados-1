#include <stdio.h>

int main(void){
	
	int lado1;
	int lado2;
	int lado3;
	
	printf("Digite o primeiro lado do triangulo: ");
	scanf("%d", &lado1);
	
	printf("Digite o segundo lado do triangulo: ");
	scanf("%d", &lado2);
	
	printf("Digite o terceiro lado do triangulo: ");
	scanf("%d", &lado3);
	
	if (lado1 == lado2 && lado2 == lado3) {
		printf("O triangulo e equilatero");
	} else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		printf("O triangulo e isosceles");
	}
	else {
		printf("O triangulo e escaleno");
	}
	
	return 0;
}
		
	
	
