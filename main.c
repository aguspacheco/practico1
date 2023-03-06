#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nro, pos;
	printf("Ingrese nro para generar tabla de multiplicar: ");
	/*nro = getchar();
	for(pos=1 ; pos <=10  ;++pos )
	{
		printf("%d x %d = %d\n",nro-'0', pos,(nro-'0') * pos );
	}
	*/
	/*
	// primer version
	do
	{		
		scanf("%d",&nro);
		if(nro!=0)
		{		
			printf("%d\n",nro );
			for(pos=1 ; pos <=10  ;++pos )
			{
				printf("%d x %d = %d\n",nro, pos,nro * pos );
			}
		}
	}
	while(nro!=0);*/
	// version 2
	scanf("%d",&nro);
	while(nro!=0)
	{	system("cls");
		if(nro!=0)
		{		
			printf("%d\n",nro );
			for(pos=1 ; pos <=10  ;++pos )
			{
				printf("%d x %d = %d\n",nro, pos,nro * pos );
			}
		}
		scanf("%d",&nro);
	}
	system("pause");
	return 0;
}
