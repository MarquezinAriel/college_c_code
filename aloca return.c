//Versao - Chamada por Valor
#include <stdio.h>
#include <stdlib.h>

int* aloca(int *p,int q);

main()
{
int *ptr=NULL;
printf("\nAloca memoria - Valor");
printf("\nFuncao main - Antes de alocar");
printf("\nEndereco ptr: %u \nConteudo ptr =%u\n",&ptr,ptr);
ptr=aloca(ptr,1);
printf("\nFuncao main - Depois de alocar");
printf("\nEndereco ptr: %u \nConteudo ptr =%u\n",&ptr,ptr);
system("pause");
}//main

int* aloca(int *p,int q)
{
printf("\nFuncao aloca - Antes de alocar");
printf("\nEndereco p: %u \nConteudo p =%u\n",&p,p);
if((p=(int*)realloc(p,q*sizeof(int)))==NULL)
  {
  printf("Erro");
  system("pause");
  exit(1);
  }
else
  {
  printf("\nFuncao aloca - Depois de alocar");
  printf("\nEndereco p: %u \nConteudo p =%u\n",&p,p);
  }
return p;
}//aloca
