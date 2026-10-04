#include <stdio.h>

int main(void){
	
	int operador;
	int num1;
	int num2;
	int resultadomais;
	int resultadomenos;
	int resultadomulti;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	resultadomais = num1 + num2;
	resultadomenos = num1 - num2;
	resultadomulti = num1 * num2;
	
	printf("MENU:\n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicador\n");
	printf("Escolha uma opcao: ");
	
	scanf("%d", &operador);
	
	switch (operador) {
		case 1:
			printf("%d + %d = %d\n", num1, num2, resultadomais);
			break;
		case 2:
			printf("%d - %d = %d\n", num1, num2, resultadomenos);
			break;
		case 3:
			printf("%d X %d = %d\n", num1, num2, resultadomulti);
			break;
		default:
			printf("Operador invalido\n");
		}
	
	return 0;
}
