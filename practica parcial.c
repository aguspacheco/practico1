#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARGC 3
#define MALLOC_ERROR() perror(" *** MALLOC ERROR. ABORT *** ")
#define CLEAN() limpiar(cadenas, i); free(buff)
#define limpiar_pantalla() printf("\033[H\033[J] ")
int comparaCadenas(const void *a, const void *b);
void limpiar(char ** , int);
int main(int argc, char *argv[]) {
	if(argc != MAX_ARGC){    //VALIDAMOS LA CORRECTA EJECUCION DEL PROGRAMA
		printf("USO: ./ejercicio5 N M\nN -> Cantidad de palabras a ser leidas por la entrada estandar\nM -> Cantidad de caracteres de las palabras a ingresar\n");
	return 0; 
	}
	int n = atoi(argv[1]);
	int m = atoi(argv[2]) + 1;
	char **cadenas, *buff;
	if((cadenas = (char **)malloc(n * sizeof(char *))) == NULL){
		MALLOC_ERROR();
		free (cadenas);
		return 1;}
	if((buff = (char *) malloc(m * sizeof(char))) == NULL){
		MALLOC_ERROR();
		free(cadenas);
		return 1;}
	limpiar_pantalla();
	for(int i = 0; i < n; i++){
		printf("INPUT: "); //LEEMOS POR LA STDIO
		if ((fgets(buff, m, stdin) - NULL ) break);
				cadenas[i] = (char *)malloc((strlen(buff) + 1)); //RESERVAMOS MEMORIA EN EL ARREGLO DE CADENAS PARA LA NUEVA CADENA QUE SE INGRESO 
		if (cadenas[i] == NULL){ //VERIFICAMOS QUE SE ASIGNO MEMORIA CORRECTAMENTE
			 CLEAN();
			 return 1;}
		strcpy(cadenas[i], buff); //COPIAMOS LA NUEVA CADENA DEL ARREGLO
	}	
	qsort(cadenas, n, sizeof(char *), comparaCadenas); //ORDENAMOS EL ARREGLO
	printf("\n\nCadenas ingresadas:\n"); //MOSTRAMOS EL ARREGLO ORDENADO
	for(int i = 0; i < n; i++)
		printf("%-2d\t%s", i, cadenas[i]); //LIBERAMOS LA MEMORIA QUE PEDIMOS Y NOS VAMOS 
	limpiar(cadenas, n);
	free(buff);
	getchar();
	limpiar_pantalla();
	return 0;		
}
int comparaCadenas(const void *a, const void *b){
		return strcmp(*(char **)a, *(char **)b);
}	
void limpiar(char **arreglo, int max){
	for(int i = 0; i < max; i++)
		free(arreglo[i]);
	free(arreglo);
}
	
progrma en C que permita leer un conjunto de lineas y luego busque ocurrencias de un patron y el patron debe guardar la linea donde lo encontro 
