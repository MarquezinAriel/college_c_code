#include <stdio.h>

void sabermaior (int start, int end);
void maiormenor (int a, int b);
int main()
{
    int i, f;
    printf("digite o primeiro valor: \n");
    scanf("%i", &i);
    printf("digite o segundo valor: \n");
    scanf("%i", &f);
    sabermaior (i, f);
return 0;
}
void sabermaior (int start, int end)
{
    if(start>end)
    {
        printf("\n%i eh maior que %i, entao:\n\n", start, end);
        maiormenor(end, start);
    }
    else if (end>start)
    {
        printf("\n%i eh maior que %i, entao:\n\n", end, start);
        maiormenor(start, end);
    }
    else if (end==start)
    {
        printf("\nos dois sao iguais!");
    }
}

void maiormenor (int a, int b)
{
    int x;
    for(x=a; x<=b; x++)
    {
        printf("%i\t", x);
    }
    printf("\n");
}


