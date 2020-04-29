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
	int i, j, temp;
	for (i=0;i<10; i++)
	{
		for(j=i+1;j<10;j++)
		{
			if (*(pv+i)>*(pv+j))
			{
				temp=*(pv+i);
				*(pv+i)=*(pv+j);
				*(pv+j)=temp;
			}
		}
	}
    printf("\n");
	for(i=0; i<10; i++)
    {
        printf("%i\t", *(pv+i));
    }
}
