#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct 
{
	int dia;
	int	mes;
	int	anio;
} t_fecha;

void IngreseDato();
int EsFechaValida(int,int,int);
int CantDiasMes(int,int);
int EsBisiesto(int);

int main()
{
    system("cls");
    IngreseDato();
    printf("\n");
    return 0;
}
void IngreseDato()
{
	t_fecha fecha;
	printf("\n ingrese el dia: ", 161);
	scanf("%d", &fecha.dia);
	printf("\n ingrese el mes: ");
	scanf("%d", &fecha.mes);
	printf("\n ingrese un anio: ", 164);
	scanf("%d", &fecha.anio);
	
	if (EsFechaValida(fecha.dia,fecha.mes,fecha.anio) == 1)
		printf("\n Es una fecha valida");
	else
		printf("\n No es una fecha valida");
}

int EsFechaValida(int dia, int mes, int anio)
{
	int fv = 0;
	if (anio > 1600)
		if	(mes >= 1 && mes <= 12)
			if	(dia >= 1 && dia <= CantDiasMes(mes,anio))
				fv = 1;
	return (fv);
}

int CantDiasMes(int mm, int aa)
{
	int cdm;
	cdm = 31;
	
	if (mm == 4 || mm == 6 || mm == 9 || mm == 11 )
	{
		cdm = 30;
	}
	else
	{
		if (mm = 2)
		{
			cdm = 28+EsBisiesto(aa);
		}
	}
	return(cdm);
}

int EsBisiesto(int a)
{
	int b;
	if ((a%4 == 0 || a%100==0 || a%400==0))
		b=1;
	else
		b=0;
	return(b);
}
