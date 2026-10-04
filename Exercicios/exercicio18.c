#include <stdio.h>

int main(void){
	
	for (int i = 1; i <= 10; i = i + 1){
		if (i <= 10){
			printf("Digite um número: \n");
			scanf("%d\n", & i);
		}
	}
	
	return 0;
}
