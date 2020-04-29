#include <stdio.h>

int division (int dividendo, int divisor);
int main ()
{
int var1, var2, recebe;
printf("\nDigite o valor do dividendo e do divisor: \n");
scanf("%i %i", &var1, &var2);
printf("\nResultado = %i", division(var1, var2));

return 0;
}

int division (int dividendo, int divisor)
{
    int contador=0;
    while (divisor<=dividendo)
{
    dividendo-=divisor;
    contador++;
}
return (contador);
}
