#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINEAS 10   //defino entrada estandar maximo 10 lineas
#define CARAC 100	 //defino una maximo de 100 caracteres 


int comparaCadena(const void *a, const void *b){ //funcion compara cadenas 
    
    char *string_a = * (char **)a;
    char *string_b = * (char **)b;
    
    return strcmp(string_a, string_b);
}


int main(int argc, char *argv[]) {
	
	int x = 1;
	char *cadena[LINEAS];
    char str[CARAC];
    
    printf("INGRESE UNA CADENA : \n");

    int i;
    for (i =0; i<LINEAS; i++){
    	
        if(gets(str) != NULL){
            
            fflush(stdin);
            
            int a = 0;
            for(; a <= strlen(str); ++a){
            	
            	switch(str[a])
            	{
            		case 'a': str[a] = '*'; break; 
                    case 'e': str[a] = '+'; break;
                    case 'i': str[a] = '-'; break;
                    case 'o': str[a] = '/'; break;
                    case 'u': str[a] = '='; break;
				}	
			}
			 cadena[i] = (char*) malloc((strlen(str)+1) * sizeof(char)); //guardo en memoria 
            strcpy(cadena[i], str);    //copia una cadena a la otra
		}
		else break;
    }

	printf("CADENA REEMPLAZADA: \n");
    
    int j = 0;
    i--;
    for(; j <= i; ++j){
    	printf("%s,", cadena[j]);	
	}

	printf("\n");
	
	if(x == 0){
        qsort(cadena, i+1, sizeof(char*), comparaCadena); //ordeno el arreglo
    }
    else{
        qsort(cadena, i+1, sizeof(char*), comparaCadena);
    }
    
    system("pause");
    return 0;
}
