#include <stdio.h>
#include <math.h>

int main()
{
	float x1, x2, base, altura, area;
	int r;
	
	printf("Ingrese el valor de x1: ");
	scanf("%f", &x1);
	printf("Ingrese el valor de x2: ");
	scanf("%f", &x2);
	printf("Ingrese la cantidad de rectangulos a utilizar: ");
	scanf("%d", &r);
	
	base = (x2 - x1) / r;
	
	for (int i = 0; i < r; i++)
	{
		altura = pow(sin(x1 + i * base), 2);
		area += base * altura;
	}
	
	printf("El area es: %f\n", area);
}
