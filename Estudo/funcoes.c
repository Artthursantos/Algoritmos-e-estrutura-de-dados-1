#include <stdio.h>

int somar(int a, int b)
{
	int resultado = a + b;
	return resultado;
}

void incrementar(int numero)
{
	numero = numero + 1;
	printf("Dentro da funcao: %d\n", numero);
}

int main(void){
	
	int total = somar(3, 4);
	
	printf("O total e %d\n", total);
	
	int meuNumero = 10;
	
	incrementar(meuNumero);
	
	printf("Fora da funcao: %d\n", meuNumero);
	
	return 0;
}
