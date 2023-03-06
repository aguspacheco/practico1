#include <stdio.h>
#include <string.h>
#define MAX_LINEAS 10
#define MAX 10
#define fgets_cadena(cadena) fgets(cadena, MAX, stdin)

int comparaCadena(const void *a, const void *b){
    
    char *string_a = * (char **)a;
    char *string_b = * (char **)b;
    
    return strcmp(string_a, string_b);
}



int main(int argc, char *argv[]) {
    char cadena[MAX]; 
    char *arregloCadenas[MAX_LINEAS];
    int i, j=0;
    printf("Ingrese texto: \n");
    
    fgets_cadena(cadena);

    while(strcmp(cadena,"\n")!=0)
    {
        
        arregloCadenas[j] = malloc(sizeof(char) * (strlen(cadena) +1));
        strcpy(arregloCadenas[j],cadena); 
        j++;
        fgets_cadena(cadena);
    }
    
    
    
    qsort(arregloCadenas, j, sizeof(char *), &comparaCadena);
    printf("Ordenado: \n");
    for(i=0;i<=j;i++){
        printf("%s",arregloCadenas[i]);
    }
    
    
    system("pause");
    return 0;
}
