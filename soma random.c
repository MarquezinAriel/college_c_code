#include <stdio.h>
#define tam 10


int soma (int v[], int n);
int main()
{
    int i, vetor[tam];
    
    printf("\nVetor randon\n\n");
    srand(time(NULL));
    
    for (i=0;i<tam;i++)
    {
        vetor[i]=rand()%101;
        printf("v[%d]= %d\n", i, vetor[i]);
    }

    printf("\n\n\nsoma - %d\n\n\n", soma(vetor, tam));

return 0;
}

int soma (int v[], int n)
{
   int s = 0;
  
   if (n > 0)
   {
      s = soma (v, n-1);
     
      if (v[n-1] > 0)
          s += v[n-1];
   }
  
    return (s);
} 