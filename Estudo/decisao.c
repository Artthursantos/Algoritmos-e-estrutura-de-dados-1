#include <stdio.h>

int main(void){
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18){
		printf("Voce pode votar.\n");
	}
	
	else {
		printf("Voce ainda nao pode votar.\n");
	}
	
	return 0;
}
