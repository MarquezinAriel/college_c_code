#include <stdio.h>

void media(float *pn);
main ()
{
	float nota[3], *pn;
	int i;
	pn = nota;
	for(i=0; i<2; i++)
	{
		do
		{
			printf("\nDigite uma nota entre 0 e 10: ");
			scanf("%f", pn+i);
		}while(*(pn+i) < 0 || *(pn+i) > 10);
	}
	media(nota);
	return 0;
}

void media (float *pn)
{
	*(pn+2) = (*(pn+1) + *(pn+0))/2;
	printf("\nA media eh: %.2f\n", *(pn+2));
	
	if(*(pn+2) >= 7)
	{
		printf("\nAPROVADO");
	}
	else if (*(pn+2) < 4)
	{
		printf("\nREPROVADO");
	}
	else
	{
		printf("\nEXAME");
	}
}
