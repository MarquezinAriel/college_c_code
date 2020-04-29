#include <stdio.h>
#include <stdlib.h>

void aloca(int **p,int q);
void recebe(int *p);
void mostra(int *p,int q);

main()
{
int *ptr=NULL,cont=0;
char op;
do{
  aloca(&ptr,cont+1); 
  recebe(ptr+cont);
  cont++;
  printf("\nDeseja continuar <S/N>: ");
  scanf("%c",&op);
  fflush(stdin);
  }while(op!='n' && op!='N');
mostra(ptr,cont);    
}//main
   
void aloca(int **p,int q)
{
if((*p=(int*)realloc(*p,q*sizeof(int)))==NULL)
  exit(1);
}//aloca

void recebe(int *p)
{
printf("Endereco: %u - numero: ",p);
scanf("%i",p);
fflush(stdin);
}//recebe

void mostra(int *p,int q)
{
int i;
for(i=0;i<q;i++,p++)
  printf("\nEndereco: %u - %i numero: %i",p,i+1,*p);
printf("\n\n\n");
system("pause");  
}//mostra   
