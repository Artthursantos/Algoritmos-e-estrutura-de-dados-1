#include <stdio.h>

int main(void){
	
	float kilos;
	float altura;
	float imc;
	
	printf("Digite o seu peso: ");
	scanf("%f", &kilos);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	imc = kilos / (altura * altura);
	
	printf("Seu IMC e: %.2f\n", imc);
	
	return 0;
}
	
	
