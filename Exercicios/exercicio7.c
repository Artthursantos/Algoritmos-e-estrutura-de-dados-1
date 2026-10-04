#include <stdio.h>

int main(void){
	
	char nome;
	int ano;
	float nota;
	int resultado;
	
	printf("Digite a primeira letra do seu nome: ");
	scanf(" %c", &nome);
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &ano);
	
	printf("Digite a sua nota final: ");
	scanf("%f", &nota);
	
	resultado = 2026 - ano;
	
	printf("%c nasceu em %d, tem aproximadamente %d anos, e tirou nota %.2f", nome, ano, resultado, nota);
	
	return 0;
}
