#include <stdio.h>
#include <stdlib.h>

struct produto {
    char nome[100];
    float preco;
    int qtd;
};

struct produto *lista = NULL;
int n = 0;

void mostrarMenu() {
    printf("\n###### CONTROLE DE ESTOQUE ######\n");
    printf("1 - Adicionar produto\n");
    printf("2 - Listar produtos\n");
    printf("0 - Sair\n");
    printf("Opcao: ");
}

int adicionar() {
    struct produto *temp;
    if (lista == NULL) {
        temp = malloc(sizeof(struct produto));
    } else {
        temp = realloc(lista, (n + 1) * sizeof(struct produto));
    }

    if (temp == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 0;
    }
    lista = temp;

    printf("\n###### Cadastro de Produto ######\n");
    printf("Nome: ");
    scanf(" %99[^\n]", lista[n].nome);
    printf("Valor: ");
    scanf("%f", &lista[n].preco);
    printf("Quantidade: ");
    scanf("%d", &lista[n].qtd);

    n++;
    return 1;
}

void listar() {
    int i;
    float total;

    printf("\n===== RELATORIO DO ESTOQUE =====\n");
    for (i = 0; i < n; i++) {
        total = lista[i].preco * lista[i].qtd;
        printf("Nome: %s; Valor: R$ %.2f; Quantidade: %d; Valor Total: R$ %.2f\n",
               lista[i].nome, lista[i].preco, lista[i].qtd, total);
    }
    printf("\n");
}

int main() {
    int op;

    do {
        mostrarMenu();
        scanf("%d", &op);

        if (op == 1) {
            if (adicionar() == 0) {
                return 1;
            }
        } else if (op == 2) {
            listar();
        } else if (op == 0) {
            free(lista);
            printf("Encerrando o programa...\n");
        } else {
            printf("Opcao invalida!\n");
        }

    } while (op != 0);

    return 0;
}
