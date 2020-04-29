#include <stdio.h>

int divisionrecursividade (int dividendo, int divisor);
int main ()
{
int var1, var2, recebe;
printf("\nDigite o valor do dividendo e do divisor: \n");
scanf("%i %i", &var1, &var2);
printf("\nResultado = %i", divisionrecursividade(var1, var2));

return 0;
}

int divisionrecursividade (int dividendo, int divisor)
{
    if (dividendo<divisor)
        return 0;
return (1+divisionrecursividade(dividendo-divisor, divisor));
}
