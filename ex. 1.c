#include <stdio.h>
main ( )
{
	int num[100], *p_num, d, tam;
	p_num = num; /* inicialização do ponteiro */
	printf ("\nDigite o tamanho da matriz entre 1 e 100:\n");
	scanf("%i", &tam);
	printf ("\nLendo os elementos da matriz\n");
	for (d = 0; d<tam; d++)
	{
		printf ("\n %i elemento:", d+1);
		scanf ("%i", p_num ++);
	}
	p_num = num; /* posiciona o ponteiro no endereço inicial */
	printf ("\nImprime os elementos da matriz\n");
	for (d = 0; d<tam; d++)
		printf ("\n num[%i] = %i", d, *(p_num ++));
}//main
