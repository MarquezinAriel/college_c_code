#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define tam 5
void quicksort (int vetor[tam], int inicio, int fim);
int main ()
{
    int i, vetor[tam], inicio, fim;

    printf("\nVetor randon\n\n");
    srand(time(NULL));

    for (i=0;i<tam;i++)
    {
        vetor[i]=rand()%101;
        printf("v[%d]= %d\n", i, vetor[i]);
    }
    quicksort (vetor, 0, tam-1);
    printf("\n\n\n");
    for(i=0; i<tam; i++)
        printf("%i\t", vetor[i]);
    return 0;
}

void quicksort (int vetor[tam], int inicio, int fim)
{
    int pivo, valorpivo, i=inicio,  j=fim, aux;
    pivo = (int) (inicio+fim)/2;
    valorpivo = vetor[pivo];
    do{
        while (vetor[i]<valorpivo)
            i++;
        while (vetor[j]>valorpivo)
            j--;
        if(i<=j)
        {
            aux = vetor[i];
            vetor[i] = vetor [j];
            vetor [j]= aux;
            i++;
            j--;
        }
    }while(j>i);
    if(inicio<j)
        quicksort(vetor, inicio, pivo);
    if(fim>i)
        quicksort(vetor, pivo, fim);

}
