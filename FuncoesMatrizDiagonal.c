#include <stdio.h>
#define N 3 // ordem da matriz quadrada
void mostra_matriz(int m[][N]);
int verifica_matriz_diagonal(int m[][N]);

int main() 
{	
    int i, j, resp, matriz[N][N]; // matriz quadrada

	for(i = 0 ; i < N ; i++)
    {
        for (j= 0 ; j < N ; j++)
        {
            printf("Digite o elemento [%i][%i]: ",i,j);
	        scanf("%i", &matriz[i][j]);
        }
        printf("\n");
    }
    
    mostra_matriz(matriz);
    resp = verifica_matriz_diagonal(matriz);
    
    if (resp == 1)
    {
    	printf("\n\nA matriz informada \x82 uma matriz diagonal.\n");
	}
    else
    {
    	printf("\n\nA matriz informada \"nao\" \x82 uma matriz diagonal.\n");
	}
    getch();
    return 0;
}

void mostra_matriz(int m[][N])
{
	int i,j;

    printf("\tCol 0\tCol 1\tCol 2");
    for(i = 0 ; i < N ; i++)
    {
        printf("\nLin %i\t", i);
        for (j= 0 ; j < N ; j++)
        {
            printf("%i\t", m[i][j]);
        }
    }
}

int verifica_matriz_diagonal(int m[][N])
{
    int i,j,aux = 1;//aux=1 -> matriz diagonal
    for (i=0; (i<N)&&(aux==1); i++) 
	{
    	for (j=0; (j<N)&&(aux==1); j++) 
		{
		    if ((i != j) && (m[i][j] != 0))
		    {
		    	aux=0;//não é uma matriz diagonal
			}
	    }
    }
    return aux;
}
