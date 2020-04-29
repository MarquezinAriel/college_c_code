#include<stdio.h>
#include<conio.h>

float calcula_media (float p[], char t);

int main()
{
	float prova[3],media;
	int i;
	char tipo;
	
	for(i=0;i<3;i++)
	{
		printf("Digite a nota da prova: ");
	    scanf("%f", &prova[i]);
	}	
	do
	{
		printf("Digite o tipo da prova (A ou P): ");
		//scanf(" %c", &tipo);
		fflush(stdin);
		tipo=getchar();
		if(tipo!='A' && tipo!='P')
		{
			printf("Tipo invalido. Digite novamente.\n");
		}
	}while (tipo!='A' && tipo!='P');
	
    media=calcula_media(prova,tipo);
    
	printf("\nA media do aluno \x82 %.2f",media);

	getch();
	return 0;
}

float calcula_media (float p[], char t)
{
   int x;
   float soma=0;	
   if(t=='A')
   {
   	  	for(x=0;x<3;x++)
   	  	{
   	  	  soma+=p[x];
   	 	}
   	  	return (soma/3);
   }
   else
   {   	
   		return ((p[0]*4+p[1]*5+p[2])/10);
   }	
}




