#include <stdio.h>
#include <stdlib.h>

int main(){
	
	void amostra_e_ajusta(int **vetor, int capacidade_inicial, int *tamanho_final)
	{
		int capacidade = capacidade_inicial;
		int tamanho = 0;
		int valor;
		
		int minimo = (capacidade_inicial * 80) / 100;
		int maximo = (capacidade_inicial * 120) / 100;
		
		while (tamanho < maximo){
			
			printf("Digite o tempo de resposta (0 para encerrar): ");
			scanf("%d", &valor);
			
			if (valor == 0) {
				
				if (tamanho >= minimo) {				
				break;
			} else {
				printf("Ainda nao foram realizados 80%% das leituras. \n");
				continue;
				
			}
		}
		
		if (tamanho >= capacidade) {
			
			capacidade = maximo;
			
			int *temp = realloc(*vetor, capacidade * sizeof(int));
			
			if (temp == NULL) {
				printf("Erro ao realocar a memoria. \n");
				free(*vetor);
				exit(1);
				
			}
			
			*vetor = temp;
			
			printf("Vetor redimensionado para %d elementos. \n", capacidade);
			
		}
		
		(*vetor)[tamanho] = valor;
		tamanho++;
		
		if (tamanho >= maximo) {
			printf("Limite de 120%% das leituras atingido. \n");
			break;
		}
		
	}
	
	int *temp = realloc(*vetor, tamanho * sizeof(int));
	
	if (temp != NULL || tamanho == 0) {
		*vetor = temp;
	}
	
	*tamanho_final = tamanho;
	
	void gera_relatorio(int *vetor, int tamanho)
	{
		int i;
		int soma = 0;
		int leituras_criticas = 0;
		double media;
		
		for (i = 0; i < tamanho; i++) {
			soma += vetor[i];
			
			if (vetor[i] > 200) {
				leituras_criticas++;
			}
		}
		
		media = (double)soma / tamanho;
		
		printf("\n### RELATORIO DO SENSOR ###\n");
		printf("Tempo medio: %.2f ms\n", media);
		printf("Leituras criticas: %d\n", leituras_criticas);
	
	}

	
	int main(void)
	{
		int S;
		int *vetor;
		int tamanho_final;
		
		do {
			printf("Digite S (quantidade prevista de leituras): ");
			scanf("%d", &S);
			
			if (S <= 0 || S % 5 != 0) {
				printf("Valor invalido! S deve ser positivo e multiplo de 5. \n");
			}
			
		} while (S <= 0 || S % 5 != 0);
		
		vetor = malloc(S * sizeof(int));
		
		if (vetor == NULL) {
			printf("Erro ao alocar memoria. \n");
			return 1;
		}
		
		amostra_e_ajusta(&vetor, S, &tamanho_final);
		gera_relatorio(vetor, tamanho_final);
		
		free(vetor);
		
		return 0;
		
}


