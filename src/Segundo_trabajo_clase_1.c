/*
 ============================================================================
 Name        : Segundo_trabajo_clase_1.c
 Author      : Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	float acumulador=0;
	float promedio;
	int i;

	for (i=0;i<5;i++)
	{
		printf("Ingrese un numero");
		scanf("%d",&numeroIngresado);

		acumulador=acumulador+numeroIngresado;
	}

	promedio=acumulador/i;
	printf("El promedio de todos los numeros ingresados es de: %f",promedio);

	/*int primerNumeroIngresado;
	int segundoNumeroIngresado;
	int tercerNumeroIngresado;
	int cuartoNumeroIngresado;
	int quintoNumeroIngresado;
	int suma;
	//int contadorNumeros;
	int promedio;

	printf("Ingrese un numero:");
	scanf("%d",&primerNumeroIngresado);

	printf("Ingrese un numero:");
	scanf("%d",&segundoNumeroIngresado);

	printf("Ingrese un numero:");
	scanf("%d",&tercerNumeroIngresado);

	printf("Ingrese un numero:");
	scanf("%d",&cuartoNumeroIngresado);

	printf("Ingrese un numero:");
	scanf("%d",&quintoNumeroIngresado);


	suma=primerNumeroIngresado+segundoNumeroIngresado+tercerNumeroIngresado+cuartoNumeroIngresado+quintoNumeroIngresado;
	promedio=suma/5;

	printf("Usted ingreso %d,%d,%d,%d,%d",primerNumeroIngresado,segundoNumeroIngresado,tercerNumeroIngresado,cuartoNumeroIngresado,quintoNumeroIngresado);
	printf("La suma de los dos numeros que ingreso es de: %d",suma);
	printf("El promedio de los numeros ingresados es %d",promedio);
	return EXIT_SUCCESS;*/
}
