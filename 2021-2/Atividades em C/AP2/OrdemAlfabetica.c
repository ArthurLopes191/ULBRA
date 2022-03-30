#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
    char palavra[50];
    
    void OrdenaPalavraLetras(){
        
        int x, y;
        char aux;
        
        for(x = 0; x <= 49; x++){
                for(y = x + 1; y <= 49; y++){
                    if(palavra[x] > palavra[y] && palavra[y] != '\0'){
                        aux = palavra[x];
                        palavra[x] = palavra[y];
                        palavra[y] = aux;
                    }
                }
            }
    }
    
    
            
void main(){
    

    printf("Informe uma palavra: \n");
    gets(palavra);
    OrdenaPalavraLetras();
    printf("Letras ordenadas: \n");
    puts(palavra);
        
          
    return 0;
}