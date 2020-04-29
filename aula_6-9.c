#include <stdio.h>
#include <time.h>
#define tam 80
void exibe_vetor (int a);
void bubble_sort (int teste);
int main ()
{
    int x;
    scanf("%i", &x);
    exibe_vetor(x);
return 0;
}

void exibe_vetor (int a)
{
    int i, vetor[tam];
    printf("\n");
    srand(time(NULL));
    for (i=0;i<tam;i++)
    {
        vetor[i]=rand()%101;
        printf("v[%i]= %i\n", i, vetor[i]);
    }
}

void bubble_sort (int teste)
{
    int i, a=20, j, vetor[tam], var1[tam];
    for (i=0; i<tam; i++)
    {

        for (j=0; j<tam; j++)
        {
            if (vetor[j]<a)
                a=vetor[j];
        }
        var1[i]=a;
    }
}
