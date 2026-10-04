#include <stdio.h>

int main(void){
	
	int nota1;
	int nota2;
	int soma;
	
	printf("Digite a primeira nota: ");
	scanf("%d", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%d", &nota2);
	
	soma = nota1 + nota2;
	
	float media = soma / (float) 2;
	
	printf("A media e %.2f\n", media);
	
	return 0;
}
