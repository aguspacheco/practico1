#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a=10 , d=5 , c;
	c= (a||d?a:d)*d;
	printf("%c %d",c,d);
}
