#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char pergunta_letra (char letra);
void troca_tam (char *precebe);
void verificar (char *p_texto, char letra);
main (){
    char recebe[80], letra;
    gets(recebe);
    fflush(stdin);
    letra = pergunta_letra(letra);
    troca_tam(recebe);
    verificar (recebe, letra);
    return 0;
}//main

char pergunta_letra (char letra){
    printf("\nDigite uma letra: ");
    scanf("%c", &letra);
    if (letra >= 'a' && letra <= 'z')
    {
        letra -= 32;
    }
    return (letra);
}//pergunta_letra

void troca_tam (char *precebe){
    int i, x;
    x = strlen(precebe);
    for(i=0; i<x; i++)
    {
        if (*(precebe+i) >= 'a' && *(precebe+i) <= 'z')
        {
            *(precebe+i) -= 32;
        }
    }
    *(precebe+i)='\0';
}//troca_tam

void verificar (char *p_texto, char letra){
    int i, j, x, contador=0, position[80];
    x = strlen(p_texto);
    for(i=0; i<x; i++)
    {
        if (*(p_texto+i) == letra)
        {
            for(j=contador;;)
            {
                *(position+j) = i;

                break;
            }
            contador ++;
        }
    }
    *(p_texto+i)='\0';
    if (contador == 0)
    {
        printf("\n\nNao existe a letra %c", letra);
    }
    else
    {
        printf("\n\nExiste(m) %i letras %c", contador, letra);
        printf("\n\nAs letras estao nas seguintes posicoes:\n");
        for (j=0; j<contador; j++)
        {
            printf("posicao [%i]\n", *(position+j)+1);
        }
    }
}//verificar
