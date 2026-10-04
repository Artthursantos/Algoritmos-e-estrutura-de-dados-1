#include <stdio.h>

int main(void){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for (int i = 1; i <= 10; i = i + 1) {
		printf("%d X %d = %d\n", numero, i, numero * i);
}
	return 0;
}
