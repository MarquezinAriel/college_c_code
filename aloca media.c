#include<stdio.h>
#include<stdlib.h>

void aloca(float **p, int q);
void recebe(float *p);
void mostra(float *p, int q);
float media(float *p, int q);

main(){

float *ptr = NULL, med=0;
int cont = 0;
char op;

do{
    aloca(&ptr,cont+1);
    recebe(ptr+cont);
    cont++;
    printf("deseja continuar: ");
    scanf("%c", &op);
    fflush(stdin);
}while(op == 'S' || op == 's');

mostra(ptr, cont);
med = media(ptr, cont);
printf("Media = %.2f\n", med);
system("PAUSE");
}

void aloca(float **p, int q){
     if((*p = (float *) realloc(*p, q*sizeof (float))) == NULL)
            exit(1);
}
void recebe(float *p)
{
    printf("numero:");
    scanf("%f", p);                  
    fflush(stdin);
     }
     
void mostra(float *p, int q)
{
    int i;
    
    for(i=0; i<q; i++,p++)
    printf("\nnumero: %.2f", *p); 
     }     
     
     
float  media(float *p, int q){
       int i, j=0;
       float m=0;
       
       for(i=0;i<q;i++){
                 if(*(p+i)!= 0){
                 j++;   
                 m+=*(p+i);
                          // printf("\nMedia - %.2f",m);
}
                        }
       m/=j;
       return m;
       }//float
