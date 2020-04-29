#include <stdio.h>
#define tam 100

void exibe ();
void cresc ();
void decr ();

int main ()
{
    exibe();
return 0;
}//main

void exibe ()
{
    int i, vetor[tam], x;
    printf("\n vetor randon");
    srand(time(NULL));
    for (i=0;i<tam;i++)
    {
        vetor[i]=rand()%101;
        printf("v[%i]= %i\n", i, vetor[i]);
    }
    printf("\n\nqual metodo deseja ordarnar? \n 1-crescente \n 2-decrescente\n");
    scanf("%i", &x);
    if(x==1)
        cresc(vetor);
    if(x==2)
        decr(vetor);
}//exibir crescente

void cresc ()
{
    int i, j, x;
    for (i=0; i<tam; i++)
    {

        for (j=0; j<tam; j++)
        {
            if (*(vetor+i)<*(vetor+j))
            {
                x=*(vetor+i);
                *(vetor+i)=*(vetor+j);
                *(vetor+j)=x;
            }
        }
    }
}//ordenation crescente
void decr ()
{

}//ordenation decrescente


