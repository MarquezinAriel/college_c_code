#include <stdio.h>

void maior(float *pv);

main ()
{
	float vetor[10], *pv;
	int i;
	pv = vetor;
	for(i=0; i<10; i++)
	{
		printf("\nDigite o valor do vetor %i: ", i+1);
		scanf("%f", pv++);
	}
	maior(vetor);
	return 0;
}

void maior(float *pv)
{
	int i;
	float media=0;
	
	for(i=0; i<10; i++)
	{
		media += *(pv+i);
	}
	media/=10;
	
	printf("\nA media eh: %.2f", media);
}
