#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aloca(char **p,int tam);

main()
{
char *ptr=NULL,aux[20],op;
int tam=0,cont=0;
do{
  printf("\nNome: ");
  gets(aux);
  fflush(stdin);
  tam+=strlen(aux)+1;
  aloca(&ptr,tam);
  if(cont==0)
    strcpy(ptr,aux);
  else
    {
    strcat(ptr,"\n");
    strcat(ptr,aux);
    }
  cont++;
  printf("\nDeseja continuar <S/N>: ");
  scanf("%c",&op);
  fflush(stdin);
  }while(op!='n'&&op!='N');
puts(ptr);
printf("\n\n\n");
system("pause");
}/*main*/

void aloca(char **p,int tam)
{
if((*p=(char*)realloc(*p,tam*sizeof(char)))==NULL)
  exit(1);
}/*aloca*/
