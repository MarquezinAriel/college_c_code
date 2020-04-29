#include <stdio.h>

void maior(int *pv);

main ()
{
	int vetor[10], *pv, i;
	pv = vetor;
	for(i=0; i<10; i++)
	{
		printf("\nDigite o valor do vetor %i: ", i+1);
		scanf("%i", pv++);
	}
	maior(vetor);
	return 0;
}

void maior(int *pv)
{
	int i, verifica=0;
	
	for(i=0; i<10; i++)
	{
		if(*(pv+i) >= verifica)
		{
			verifica = *(pv+i);
		}
	}
	
	printf("\no maior numero eh: %i", verifica);
}
