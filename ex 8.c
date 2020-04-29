#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 80

void recebe(char *strfrase, char *strsearch);
void procura (char *strfrase, char *strsearch);
void mostra(char *strfrase, char *strsearch, int *termo1, int *termo2);
main (){
	char frase[tam], search[tam];
	recebe(frase, search);
	procura (frase, search);
	return 0;
}

void recebe(char *strfrase, char *strsearch){
	printf("Digite uma frase: ");
	gets(strfrase);
	printf("\nProcurar por: ");
	gets(strsearch);
}

void procura (char *strfrase, char *strsearch){
	int i, j, x, y, cont=0;
	x = strlen(strfrase);
	y = strlen(strsearch);
	
	for (i=0; i<x; i++){
		cont=0;
		for(j=0; j<y; j++){
			if(*(strfrase+i)==*(strsearch+j)){
				cont++;
				i++;
				if(cont==y){
					break;
				}
			}
			else if(*(strfrase+i)!=*(strsearch+j)){
				break;
			}
		}
		if(cont==y){
			break;
		}
	}
	//*(strfrase+i)='\0';
	//*(strsearch+j)='\0';
	mostra(strfrase, strsearch, cont, y);
}

void mostra(char *strfrase, char *strsearch, int *termo1, int *termo2){
	system("pause");
	printf("\n\n------------------\n\n");
	if (termo1 == termo2){
		printf("\nO string: ");
		puts(strsearch);
		printf("\nFoi encontrado na frase: ");
		puts(strfrase);
	}
	else if (termo1 != termo2){
		printf("\nNao foi encontrado a string: ");
		puts(strsearch);
		printf("\nNa frase: ");
		puts(strfrase);
	}
}
