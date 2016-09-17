////////////////////////////////////////////////////////////////
// Programa exemplo de utilização de malloc, Alocacao Dinamica
//
// Laboratório de Algoritmo II
//
// Autora: Alana Azevedo, academica do curso de Sistemas de Informacao, da Faculdade Antonio Meneghetti
// Data: 16/09/2016
////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Cria um ponteiro para o bloco de memoria alocado
	char *memoria_alocada;
	// Aloca a quantidade de memoria solicitado (50 x char)
	// e inicializa o ponteiro com posicao da memoria.
	memoria_alocada = malloc (50 * sizeof (char));
	// se o ponteiro foi inicializado com o valor nulo
	if (memoria_alocada == NULL)
	{
		// Exibe a mensagem erro.
		printf("Nao foi possivel alocar a memoria desejada!\n");
	}
	
	// Se o ponteiro nao foi nulo.
	else
	{
		// Transfere a mensagem para a memoria alocada.
		strcpy (memoria_alocada, "Esta e a melhor aula do mundo!\n");// strcpy = string copy.
	}
	
	// Exibe o conteudo da memoria alocada.
	printf("O conteudo da memoria alocada e: %s\n", memoria_alocada);
	
	// Libera a memoria alocada
	free (memoria_alocada);
	
	// Retorna.
	return 0;
}
