#include <stdio.h>
#define t 10

void soma(int *pa, int *pb);

main()
{
	int a[t], b[t], x=t, y, *pa, *pb;
	pa = a;
	pb = b;
	printf("digite dois valores para somar %i vezes\n", x);
	for(y=0; y<x; y++)
	{
		printf("\nrodada %i", y+1);
		printf("\nDigite o valor A: ");
		scanf("%i", pa++);
		printf("\nDigite o valor B: ");
		scanf("%i", pb++);
		
	}
	soma(a, b);
	return 0;
}

void soma(int *pa, int *pb)
{
	int i, c[t], *pc;
	pc = c;
	
	for(i=0; i<t; i++)
	{
		*(pc+i) = *(pa+i) + *(pb+i);
	}
	
	for(i=0; i<t; i++)
	{
		printf("\n soma da rodada %i eh: %i", i+1, *(pc++));
	}
	
}
