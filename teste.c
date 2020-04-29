#include <stdio.h>
#include <time.h>
#define tam 5
#define value 100
void mat_random ();
void coordenadas (int matriz[value][value]);
int main()
{
    mat_random ();
    return 0;
}//main

void mat_random ()
{
    int i, j, vetor[value][value];
    srand(time(NULL));
    printf("\t    MATRIZ RANDOM\n\n\n");// pra ficar centralizado :v
    for (i=0;i<tam;i++)
    {
        for (j=0;j<tam;j++)
        {
            vetor[i][j]=rand()%101;
            printf("%d\t", vetor[i][j]);
        }//for de dentro
        printf("\n");
    }//for de fora
    printf("\n\n\n");
    system ("pause");
    coordenadas (vetor[value][value]);
}//mat_ranom

void coordenadas (int matriz[value][value])
{
    int lin_start, col_start, lin_end, col_end, i, j, armazem[value][value], var1=0;
    printf("\nDigite as coordenadas iniciais:\nObs.: Primeiro linha e depois coluna\n");
    scanf("%i %i", &lin_start, &col_start);
    printf("\nDigite as coordenadas finais:\nObs.: Primeiro linha e depois coluna\n");
    scanf("%i %i", &lin_end, &col_end);
    // i = linhas e j = colunas
    for (i=0;i<tam;i++)
    {
        for (j=0;j<tam;j++)
        {
            if((i<=lin_start && j<=col_start) || (i>=lin_end && j>=col_end))
            {
                armazem[i][j]=matriz[i][j];
                //i++;
                //j++;
            }
        }//for de dentro
    }//for de fora
    for (i=0;i<tam;i++)
    {
        for (j=0;j<tam;j++)
        {
            printf("%d\t", armazem[i][j]);
        }//for de dentro
        printf("\n");
    }//for de fora

}//coordenadas
