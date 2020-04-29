#include <stdio.h>
#include <stdlib.h>

void aloca(int **p,int q);
void recebe(int *p,int q);
void mostra(int *p,int q);

main()
{
int *ptr=NULL,qtde;
do{
   printf("\nQuantos numeros - max.10: ");
   scanf("%i",&qtde);
   fflush(stdin);
  }while(qtde<0 || qtde>10);
aloca(&ptr,qtde);
recebe(ptr,qtde);
mostra(ptr,qtde);
}//main
   
void aloca(int **p,int q)
{
if((*p=(int*)realloc(*p,q*sizeof(int)))==NULL)
  exit(1);
}//aloca

void recebe(int *p,int q)
{
int i;
for(i=0;i<q;i++,p++)
  {
  printf("Endereco: %u - %i numero: ",p,i+1);
  scanf("%i",p);
  fflush(stdin);
  }//for
}//recebe

void mostra(int *p,int q)
{
int i;
for(i=0;i<q;i++,p++)
  printf("\nEndereco: %u - %i numero: %i",p,i+1,*p);
printf("\n\n\n");
system("pause");  
}//mostra   
