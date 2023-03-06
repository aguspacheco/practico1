#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINEA 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char **lineas;
	char tmp[MAXLINEA];
	int contLinea=0;
	lineas = (char**)malloc(sizeof(char**));
	if(fgets(tmp,MAXLINEA-1,stdin)!=NULL ) {
		lineas[0] =(char *) malloc(sizeof(char)* (strlen(tmp)+1) );
		strcpy(lineas[0],tmp);
	}
	lineas = void *realloc(lineas, sizeof(char**) *2);
	if(fgets(tmp,MAXLINEA-1,stdin)!=NULL ) {
		lineas[1] =(char *) malloc(sizeof(char)* (strlen(tmp)+1) );
		strcpy(lineas[1],tmp);	
		void free (dir.memoria)			
	}
	printf("L0; %s\n", lineas[0]);
	printf("L1; %s\n", lineas[1]);
	system("pause");
	return 0;
}	
