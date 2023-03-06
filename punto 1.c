#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc,char *argv[]) {
 char * str="Recu C";
	char * p=str;
	for (p+=strlen(str)-1; p >=str ; p-=2) 
     putchar(*p);



}
