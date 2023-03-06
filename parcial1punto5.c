#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 4
#define MAXLINEA 4

int main(int argc, char *argv[]) {
		char*lineas[80];
		char linea[MAXLINEA], patron[MAXLINEA];
		int i,j,linea_cont[MAX];
		if(argc == 1)  //verifica que se hayan introducido argumentos
		{
			printf("no se informo patron a buscar: \n");
			exit(1); //sale del programa
		}
		strcpy(patron,argv[1]); //almacena el primer argumento y lo copia en la variable patron
		printf("ingresar lineas para buscar el patron: \%s\"\n",patron);
		for(i=0;i<MAX;i++)
		{
			fflush(stdin); //limpiamos la entrada del buffer
			if(fgets(linea,MAXLINEA-1,stdin )==NULL) //devuelve la linea si y verifica que no este vacio
			{
				break; //corta el ingreso de texto
			}
		lineas[i] = (char*)malloc(sizeof(char)*strlen(linea)+1); //almaceno memoria
		strcpy(lineas[i],linea);  	
		}
		printf("Patron encontrado en: \n");
		for(j=0;j<i;++j)
		{
			if(strstr(lineas[i],patron)!=NULL) //recupero la posicion de la primera aparicion de una subcadena en una cadena
				linea_cont[j] = 1;
			else
				linea_cont[i] = 0;
		}
		for(j=0;j<i;++j)
		{
			if(linea_cont[j])
			printf("%d - ", (j+1));
		}
		printf("\n");
	}
	

	




