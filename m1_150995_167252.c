#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define tam 80

void minuscula(char *frase);
void vogal(char *frase);
void add_vogal(char *frase);
void forca(char *frase, char *frase2, char *aux);


main()
{
   char frase[tam], *pfrase, aux[tam], *paux, frase2[tam], *pf2;
   pfrase=frase;
   pf2=frase2;
   paux=aux;
   printf("Digite uma frase: ");
   gets(pfrase);
   minuscula(pfrase);
   strcpy(pf2,pfrase);
   vogal(pfrase);
   add_vogal(paux);
   //O USUARIO TERA 5 CHANCES
   forca(pfrase, pf2, paux);
   /*puts(pfrase);
   printf("\n");
   puts(pf2);*/



   return 0;
}

void minuscula(char *frase)
{
    int i;
    for(i=0; i<strlen(frase); i++)
    {
        if(*(frase+i)>='A' && *(frase+i)<='Z')
            *(frase+i)+=32;
    }
    *(frase+i)='\0';
}

void vogal(char *frase)
{
    int i;
    for(i=0; i<strlen(frase); i++)
    {
        if(*(frase+i)!='a' && *(frase+i)!='e' && *(frase+i)!='i' && *(frase+i)!='o' && *(frase+i)!='u' && *(frase+i)!=' ')
            *(frase+i)='_';
    }
    *(frase+i)='\0';
}

void add_vogal(char *frase)
{
    int i;
    for(i=0; i<5; i++)
    {
        if(i==0)
            *(frase+i)='a';
        else if(i==1)
            *(frase+i)='e';
        else if(i==2)
            *(frase+i)='i';
        else if(i==3)
            *(frase+i)='o';
        else if(i==4)
            *(frase+i)='u';
    }
    *(frase+i)='\0';
}

void forca(char *frase, char *frase2, char *aux)
{
    int i, j, cont=5, cont2=0, y, w, a=0;
    char x, aux2[tam], *pa2;
    pa2=aux2;
    /*puts(frase);
    printf("\n");
    puts(frase2);
    printf("\n");
    puts(aux);*/
    for(i=0; i<5; i++)
    {
        printf("\nDigite uma letra: ");
        scanf("%c", &x);
        for(j=0; j<strlen(aux);)
        {
            if(x==*(aux+j))
            {
                printf("\nDigite outra letra: ");
                scanf("%c", &x);
                j=0;
            }
            else
                j++;
        }
        *(aux+j)='\0';
        for(y=0; y<strlen(frase2); y++)
        {
            if(x==*(frase2+y))
            {
                *(frase+y)=*(aux+cont)=*(pa2+cont2)=x;
                cont++;
                cont2++;
            }
        }
        /*printf("\n");
        puts(frase);
        printf("\nLetras digitadas: ");
        puts(pa2);
        printf("\n");*/


    }
    w=strlen(frase2);
    for(y=0; y<w; y++)
        if(*(frase+y)==*(frase2+y))
        {
            a++;
        }

    if(a==w)
    {
        printf("\nacertou");
    }
    else
        puts(frase2);
}
