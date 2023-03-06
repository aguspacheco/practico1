#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CARACT 10
#define MAX_LINEAS 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int comparaCadenas(const void *a, const void *b){
    //printf("\nEntre\n");
    
    char *c1 = *((char **)a);
    char *c2 = *((char **)b);
    return strcmp(c1, c2);

}

int main(int argc, char *argv[]){
    
    char *cadena[MAX_LINEAS];
    char s[MAX_CARACT];
    
    printf("Ingrese una cadena\n");
    
    int i;
    for (i =0; i<MAX_LINEAS; i++){
        if(gets(s) == NULL)
            break;
        cadena[i] = (char*) malloc((strlen(s)+1) * sizeof(char));
        strcpy(cadena[i], s);
    }
    
    printf("\nCadena original\n");
    int j;
    for(j = 0; j < i; j++){
        printf("%s\n", cadena[j]);
    }
    
    qsort(cadena, i, sizeof(char*), comparaCadenas);
    
    printf("\nCadena ordenada\n");
    for(j = 0; j < i; j++){
        printf("%s\n", cadena[j]);
    }
    free(cadena);
}

