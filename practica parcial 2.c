#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int var=10;
	
	var *= -- *(&var);
	printf("%d",var);
}
