#include <stdio.h>
#include <string.h>
#include <conio.h>


int main(){
    
    int menu;
    int i, y;
    char string[51];
    char pos;
    
    do{
    printf("\nSelecione uma das opcoes: \n");
    printf("1 - ORDENAR (*Faz a leitura de uma palavra (de no maximo 50 caracteres), e apresenta a palavra com as letras ordenadas em ordem alfabetica.) \n");
    printf("2 - SUBSTITUIR (*Faz a leitura de um texto livre (de no maximo 50 caracteres) e substitui escrevendo todos os espacos em branco do texto livre por underline( _ ), alem disso, inverte a ordem do texto.)\n");
    printf("3 - ENCERRAR \n");
    scanf("%d%*c", &menu);
    }while (menu < 1||menu > 3);
       
        switch (menu)
        {
        case 1:

            printf("Informe uma palavra(max 50 caracteres): \n");
            gets(string);
            fflush(stdin);
        
            for (i =0 ; string[i] != '\0'; i++)
            {
                switch(string[i])
                {

                case ' ':

                    string[i] = "";

                break;
                }
            }
                for(i = 0; i<= strlen(string); i++){
                    for(y = i + 1; y <= strlen(string); y++){
                        if(string[i] > string[y] && string[y] != '\0'){
                            pos = string[i];
                            string[i] = string[y];
                            string[y] = pos;
                        }
                    }
                }
                printf("A palavra ordenada eh: %s", string);
            break;

        case 2:
                printf("Entre com uma palavra ou frase (max 50 caracteres): \n");
                gets(string);
                fflush(stdin);

                for (i=strlen(string)-1; i>=0; i--){
                    if(string[i]!=' '){
                        printf("%c", string[i]);
                    }
                    else{printf("_");
                    }
                } 
                
                printf(" \n");
        
            break;

        case 3:
            return(0);
            break;       

        default:
            printf("ERRO!!! Opcao invalida \n");
        break;
        }
        
    
    return 0;
}