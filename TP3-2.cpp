#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main() {
	int radio = 0;
	char opcion;
	float longitud;
	float area;
	float volumen;
	
	printf ("Ingrese el radio: ");
	scanf ("%d",&radio);
	
	printf ("Elija la opcion: \n a)C�lculo de la longitud de la circunferencia \n b)C�lculo del �res del c�rculo \n c)C�lculo del vol�men de la esfera\n");
	scanf ("%c");
	scanf ("%c",&opcion);
	
	switch (opcion)
	{ 
	case 'a': 
		longitud = (2*PI*radio);
		printf ("La longitud es: %f", longitud);
		break;
		
	case 'b':
		area = (PI*radio*radio);
		printf ("El �rea es: %f", area);
		break;
		
	case 'c':
		volumen = ((4/3)*PI*radio*radio*radio);
		printf ("El volumen es: %f", volumen);
		break;
		
	default: 
		printf ("No es posible hacer ese calculo, ingrese otro numero");
		break;
		
	}
	
	
	return 0;
}
