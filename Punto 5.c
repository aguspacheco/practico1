#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int numero = 0;
	printf("Introduzca numero: ");
	do {
		scanf("%c" , &c);
		switch (c) {
			case '-':
				 break;
			case '0': printf("cero");
					break;
			case '1': printf("uno");
					break;
			case '2' : printf("dos");
				  	break;
			case '3' : printf("tres");
					break;
			case '4' : printf("cuatro");
					break;
			case '5' : printf("cinco");
					break;
			case '6' : printf("seis");
					break;
			case '7' : printf("siete");
					break;
			case '8' : printf("ocho");
					break;
			case '9' : printf("nueve");
					break;
				numero++;
				break;
			
			}
			
		} while (c != '-');
		
		printf("Numero: %d",numero);
		return 0;		
	} 
	

