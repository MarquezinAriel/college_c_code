#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_GRAU 100
#define MAX_ITERACOES 500

/* Variaveis Globais */

// O intervalo inferior para se calcular a dicotomia
float aInicial;
// O intervalo superior para se calcular a dicotomia
float bInicial;
// O erro estipulado
float erro;
// Armazena os coeficientes do polinomio
float coeficientes[MAX_GRAU];
// Armazena os dados da dicotomia
float tabelaDIcotomia[MAX_ITERACOES][6]; // a, b, m, f(a), f(b), f(m)/**

/* Funçoes */
// Recebe todas as entradas dos usuarios e armazena nas variaveis globais
void recebeEntradas()
{
	// Receber a, b, e erro
	// Receber o grau do polinomio (Validar com o valor MAX_GRAU)
	// Receber os coeficientes do polinÃ´mio
}

// Calcula o numero de iteraçoes (K) maximas a serem executadas
int calcularIteracoes()
{

}

// Calcula a funçao f, para um determinado valor, utilizando os coeficientes do polinomio
float calculaFuncao(float valor)
{

}

// Resolve a equaçao utilizando o metodo da dicotomia.
float dicotomia()
{
	// garantir que existe raiz no intervalo (imprimir mensagem de erro e retornar zero)
	// calcular o numero de iteraçoes k (limitar a MAX_ITERACOES)
	// executar o processo da dicotomia checando as duas condiçoes de parada
}

void imprimeTabela()
{
	// Imprimir a tabela da dicotomia
}

int main()
{
	recebeEntradas();
	float resposta = dicotomia();
	imprimeTabela();
	return 0;
}
