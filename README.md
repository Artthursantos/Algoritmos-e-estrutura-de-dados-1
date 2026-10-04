# Algoritmos e Estruturas de Dados I — 2026/2

Repositório de acompanhamento da disciplina AED1 (UFPel), incluindo revisão dos fundamentos de C (AEP/PC), exercícios de fixação, atividades de aula e provas.

## Por quê esse repositório existe

Refiz AED1 depois de um tempo longe da linguagem C, e decidi documentar o processo completo de aprendizado — desde o básico que eu já deveria saber — pra acompanhar minha evolução de verdade ao longo do semestre, e pra que o professor possa ver esse histórico se precisar.

## Estrutura

guias/ → material de estudo construído durante a revisão (conceitos + exemplos)
fundamentos/ → prática livre, organizada por tópico (do Hello World até funções/vetores)
tarefas-aula/ → atividades e exercícios passados em aula
provas/ → avaliações práticas e teóricas

## Como compilar

Os arquivos .c foram escritos e testados no Geany com o compilador gcc (MinGW-w64). Para compilar manualmente:

gcc -Wall -o nome_do_programa nome_do_programa.c
./nome_do_programa
