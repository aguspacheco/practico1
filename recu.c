#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arrInt[]={0,0,1,1,2,2,3,3};
	int *pInt=&arrInt[2], result=0, i=4;
	printf("{");
	for(;--i;){
		result+=*(pInt+i);
	printf("%s\'%d\'",(i==3?"":","),result);
	}
	printf("}");
}
