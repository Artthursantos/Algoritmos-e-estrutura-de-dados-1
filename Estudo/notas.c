#include <stdio.h>

int main(void){
	
	float nota;
	
	printf("Digite sua nota: ");
	scanf("%f", &nota);
	
	if (nota >= 9) {
		printf("Conceito A\n");
	} else if (nota >= 7) {
		printf("Conceito B\n");
	} else if (nota >= 5) {
		printf("Conceito C\n");
	} else {
		printf("Reprovado\n");
	}
	
	return 0;
}
