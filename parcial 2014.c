#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINEAS 10 
#define CARAC 5 
#define IS_VOCAL(a) (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='U' || a=='U' )
#define fgets_cadena(cadena) fgets(cadena, MAX, stdin)

int isvocal(char a)
{
	return (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='U' || a=='U');
}

int contarVocales(char *cadena)

int main(int argc, char *argv[]){
    char *cadena[LINEAS];
    char str[CARAC];
    int i,j = 0;
    
    printf("Ingrese cadenas: \n");
	{
    	for (i =0; i<LINEAS; i++){
        if(gets(str) == NULL)
            break;
        cadena[i] = (char*) malloc((strlen(str)+1) * sizeof(char));
        strcpy(cadena[i], str);
        fgets_cadena(cadena);
    }
    
    	
	}
}

