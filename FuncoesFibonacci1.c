#include <stdio.h>
int fib(int n);

int main() 
{
	int num;
	
	printf("Informe a posicao do termo na sequencia de Fibonacci desejada:\n");
	scanf("%i", &num);
	
	printf("\nO %io. termo da sequencia de Fibonacci \x82 %i.", num, fib(num));
    getch();
	return 0;
}

int fib(int n) 
{
  	if ((n == 1) || (n == 2))
  	{
 		return (1); 	
  	}
  	else
  	{
  		return(fib(n-1) + fib(n-2));
	}
}

