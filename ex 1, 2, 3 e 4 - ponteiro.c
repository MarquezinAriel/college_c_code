#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invert (char *str);
void size (char *str);
main ()
{
	char frase[80];
	printf("Digite uma frase: ");
	gets(frase);
	size (frase);
	invert(frase);
	//puts(frase);
	return 0;
}

void invert (char *str){
	int i;
	printf("\nFrase invertida:\n");
	for(i=strlen(str); i>=0; i--){
		printf("%c", *(str+i));
	}
	*(str+i)='\0';
}

void size (char *str){
	int i, j;
	j = strlen(str);
	for(i=0; i<j; i++){
		if(*(str+i)>='A' && *(str+i) <='Z')
			*(str+i)+=32;
		else if (*(str+i)>='a' && *(str+i) <='z')
			*(str+i)-=32;
	}
	*(str+i)='\0';
}
