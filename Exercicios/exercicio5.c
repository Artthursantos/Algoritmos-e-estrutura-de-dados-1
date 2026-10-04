#include <stdio.h>

int main(void){
	
	int celsius;
	float formula;
	
	printf("Digite a temperatura em celsius: ");
	scanf("%d", &celsius);
	
	formula = ((float)celsius * 9 / 5) + 32;
	
	printf("%d C equivale a %.2f F", celsius, formula);
	
	return 0;
}
