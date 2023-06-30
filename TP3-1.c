#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() 
{
	float radio, circunferencia, area, volumen;
	char eleccion;
	
	printf ("Ingrese el valor del radio:");
	scanf ("%f", &radio);
	
	printf ("Elija: \n (a)-Calculo de la longitud de la circunferencia, \n (b)- Calculo del area del circulo y \n (c)- Calculo del volumen de la esfera:");
	scanf (" %c", &eleccion);
	
	if (eleccion == 'a')
	{
		circunferencia = 2 * PI * radio;
		printf ("La longitud de la circunferencia es: %.2f", circunferencia);
	}
	else if (eleccion == 'b')
	{
		area = PI * pow(radio, 2);
		printf ("El valor del area es: %.2f", area);
	}
	else if (eleccion == 'c')
	{ 
		volumen = 1.33333333 * PI * pow(radio, 3);
		printf ("El valor del volumen es: %.2f", volumen);
	}
	else
	{
		printf ("La opcion ingresada no es valida.");
	}
}

