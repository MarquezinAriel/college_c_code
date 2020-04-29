#include <stdio.h>
#include <time.h>
#define tam 5
#define value 100
int vetor[value][value];
void mat_random ();
void coordenadas (int matriz[value][value]);
int soma (int coord_ini_i, int coord_ini_j, int coord_end_i, int coord_end_j, int inc_i,int inc_j);
int main()
{
    mat_random ();
    return 0;
}//main

void mat_random ()
{
    int i, j;
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
    coordenadas (vetor);
}//mat_ranom

void coordenadas (int matriz[value][value])
{
    int lin_start, col_start, lin_end, col_end, i, j, armazem[value][value], var1=0;
    printf("\nDigite as coordenadas iniciais:\nObs.: Primeiro linha e depois coluna\n");
    scanf("%i %i", &lin_start, &col_start);
    printf("\nDigite as coordenadas finais:\nObs.: Primeiro linha e depois coluna\n");
    scanf("%i %i", &lin_end, &col_end);
    // i = linhas e j = colunas
    var1 = soma (lin_start, col_start, lin_end, col_end, (lin_start>lin_end) ? -1 : 1, (col_start>col_end) ? -1 : 1);
    //printf("%i", var1);
    printf("\n\n\n");
    system ("pause");
    printf("soma das coordenadas eh: %i", var1);
}//coordenadas

int soma (int coord_ini_i, int coord_ini_j, int coord_end_i, int coord_end_j, int inc_i,int inc_j)
{
    int valor_anterior = vetor[coord_ini_i][coord_ini_j];

    if(coord_ini_i != coord_end_i) {
        coord_ini_i += inc_i;
    }

    if(coord_ini_j != coord_end_j) {
        coord_ini_j += inc_j;
    }

    if((coord_ini_i != coord_end_i) || (coord_ini_j != coord_end_j)) {
        return valor_anterior + soma(coord_ini_i, coord_ini_j, coord_end_i, coord_end_j, inc_i, inc_j);
    }
    else {
        return valor_anterior + vetor[coord_ini_i][coord_ini_j];
    }
}
