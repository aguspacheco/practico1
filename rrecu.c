#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LINEAS 5
#define MAX 8


int comparaCadena(const void *a, const void *b){
    
    char *string_a = * (char **)a;
    char *string_b = * (char **)b;
    
    return strcmp(string_a, string_b);
}

int main(int argc, char *argv[]) {
    int x = 1;

    if(argc != 0){
        if(argv[1] == "-d"){
            x = 0;
        }
    }
    
    
    char *cadena[MAX_LINEAS];
    char str[MAX];
    
    int i = 0;
    for(; i <= MAX_LINEAS; ++i){
        
        if(gets(str) != NULL){
            
            fflush(stdin);
            
            int a = 0;
            for(; a <= strlen(str); ++a){		
                
                switch(str[a])						//reemplazo los numeros por los caracteres
                {
                    case '0': str[a] = '<'; break; 
                    case '1': str[a] = '#'; break;
                    case '2': str[a] = '$'; break;
                    case '3': str[a] = '%'; break;
                    case '4': str[a]  = '&' ; break;
                    case '5': str[a]  = '/' ; break;
                    case '6': str[a]  = '*' ; break;
                    case '7': str[a]  = '+' ; break;
                    case '8': str[a]  = '-' ; break;
                    case '9': str[a]  = '>' ; break;
                }
            }
            cadena[i] = (char*) malloc((strlen(str)+1) * sizeof(char)); //guardo en memoria 
            strcpy(cadena[i], str);    //copia una cadena a la otra
        }
        else break;
    }
    
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
    
    printf("Ordenado: \n");
    j = 0;
    for(; j <= i; ++j){
        
        printf("%s,", cadena[j]);
    }
}
