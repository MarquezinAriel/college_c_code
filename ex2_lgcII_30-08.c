#include <stdio.h>
#include <stdlib.h>

int fibonacci (int f);
int main ()
{

system("color 0a");
int var1, var2=0;
for (;;var2++)
{
printf("\nDigite o variavel do finbonacci: \n");
scanf("%i", &var1);
printf("\nResultado = %i", fibonacci (var1));
}


return 0;
}

int fibonacci (int f)
{
    if(f<3)
        return 1;
        return (fibonacci(f-1)+fibonacci(f-2));
}
