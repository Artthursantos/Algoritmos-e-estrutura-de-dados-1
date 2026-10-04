#include <stdio.h>

int main(void){
	
	int n1;
	int result;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n1);
	
	result = n1 * 2;
	
	printf("O dobro de %d e %d\n", n1, result);
	
	return 0;
}
