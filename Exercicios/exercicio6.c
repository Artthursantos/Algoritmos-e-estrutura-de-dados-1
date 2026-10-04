#include <stdio.h>

int main(void){
	
	int centavos;
	int resultado;
	int sobra;
	
	printf("Digite um valor inteiro em centavos: ");
	scanf("%d", &centavos);
	
	resultado = centavos / 100;
	sobra = centavos % 100;
	
	printf("%d centavos = %d reais e %d centavos", centavos, resultado, sobra);
	
	return 0;
}
