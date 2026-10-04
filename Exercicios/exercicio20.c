#include <stdio.h>

int multiplicar(int a, int b)
{
	int resultado = a * b;
	return resultado;
}

int main(void){
	
	int num1;
	int num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	int total = multiplicar(num1, num2);
	
	printf("O total entre %d e %d e = %d\n", num1, num2, total);
	
	return 0;
}
