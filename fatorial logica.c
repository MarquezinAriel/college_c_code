#include<stdio.h>
int fatorial (int cont);

int main()
{

int x,a;

scanf("%i", &x);
fatorial(x);
printf("%i", fatorial(x));


return 0;
}

int fatorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return (n*fatorial(n-1));
    }
}
