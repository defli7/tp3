#include <stdio.h>
#include <math.h>

int main() {
	float derivada=0, c=0.1;
	float x=0,y=0, y_=0;
		
	printf ("Ingrese el valor que desea saber la derivada: ");
	scanf ("%f", &x);
	
	y = pow(sin(x+c), 2);
	y_ = pow(sin(x), 2);
	
	derivada=(y-y_)/c;
	
	printf ("El valor de la derivada es: %f", derivada);
	return 0;
}

