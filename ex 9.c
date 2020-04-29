#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 80

void separa_nome (char *name, char *mom, char *fname, char *lname, char *fmom);
void separa_sobrenome (char *recebe, char *lname);
main (){
	char nome[tam], mae[tam], cidade[tam], fnome[tam], lnome[tam], fmom[tam], pcity[tam];
	printf("digite seu nome inteiro: ");
	gets(nome);
	printf("\ndigite o nome da sua mae: ");
	gets(mae);
	printf("\ndigite o nome da sua cidade: ");
	gets(cidade);
	fflush(stdin);
	separa_nome(nome, mae, fnome, lnome, fmom);
	return 0;
}

void separa_nome (char *name, char *mom, char *fname, char *lname, char *fmom){
    char recebe[tam];
	int i, y;
    for(i=0; i<tam; i++){
        if(*(name+i)==' '){
            break;
        }
        else{
            *(fname+i) = *(name+i);
        }
    }
    *(fname+i)='\0';
    for(i=0; i<tam; i++){
        if(*(mom+i)==' '){
            break;
        }
        else{
            *(fmom+i) = *(mom+i);
        }
    }
    *(fmom+i)='\0';
    for(i=strlen(name), y=0; i>=0; i--, y++){
        if(*(name+i)==' '){
            break;
			//*(recebe+y)='\0';
			
        }
        else {
            *(recebe+y) = *(name+i);
            printf("%c", *(recebe+y));
        }
    }
    separa_sobrenome(recebe, lname);
}

void separa_sobrenome (char *recebe, char *lname){
	int i, y;
	
    puts(recebe);
    for(i=strlen(recebe), y=1; i>=0; i--, y++){
    	*(lname+y) = *(recebe+i);
    	printf("%c", *(lname+y));
    }
}
