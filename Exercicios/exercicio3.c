#include <stdio.h>

int main(void){
	
	int idade;
	float altura;
	char inicial;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite sua inicial: ");
	scanf(" %c", &inicial);
	
	printf("Idade: %d | Altura: %.2f | Inicial: %c\n", idade, altura, inicial);
	
	return 0;
}
