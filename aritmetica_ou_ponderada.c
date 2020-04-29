#include <stdio.h>

void recebe_tipo (char tipo);
int main ()
{
    float nota[3];
    int i;
    char x;
    for(i=0; i<3; i++)
    {
        printf("digite a nota %i:\n", i);
        scanf("%i", &nota[i]);
    }
    recebe_tipo(x);

    printf("%c", x);
    getch();
    return 0;
}
void recebe_tipo (char tipo)
{
    do
    {
        printf("digite o tipo de calculo que tu quer:\nA - aritmetica\nP - ponderada\n");
        scanf("%c", &tipo);
    }while(tipo!='A' && tipo!='P');
}
