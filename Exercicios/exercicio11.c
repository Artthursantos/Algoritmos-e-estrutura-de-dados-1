#include <stdio.h>

int main(void){
	
	int nota;
	int freq;
	
	printf("Digite a sua nota de 0 a 10: ");
	scanf("%d", &nota);
	
	printf("Digite a sua frequencia de 0 a 100: ");
	scanf("%d", &freq);
	
	if (nota >= 7 && freq >= 75) {
		printf("Aluno aprovado");
	} else {
		printf("Aluno reprovado");
	}
	
	return 0;
}
