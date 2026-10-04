#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 3;
	int c;
	int result;
	
	printf("Digite um numero: ");
	scanf("%d", &c);
	result = c + c;
	printf("Resultado: %d\n", result);
	
	printf("Soma: %d\n", a + b);
	printf("Subtracao: %d\n", a - b);
	printf("Multiplicacao: %d\n", a * b);
	printf("Divisao: %d\n", a / b);
	printf("Resto: %d\n", a % b);
	
	float divisaoDecimal = a / (float) b;
	printf("Divisao decimal: %f\n", divisaoDecimal);
	
	printf("a > b: %d\n", a > b);
	printf("a == b: %d\n", a == b);
	
	int idade = 20;
	int temCarteira = 1;
	
	printf("Pode dirigir: %d\n", idade >= 18 && temCarteira);
	
	int chuva = 0;
	int ventoForte = 1;
	
	printf("Cancelar passeio: %d\n", chuva || ventoForte);
	
	int aprovado = 0;
	printf("Reprovado: %d\n", !aprovado);
	
	return 0;
}
	
