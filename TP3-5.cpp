#include <stdio.h>
#include <math.h>

float delta = (4*M_PI)/50;
float variable_x = 0;
float y = 0;
float derivada=0, c=0.1;
float yy=0, yy_=0;

int main() {
	for (int i=0; i<50; i++){
		
		y = sin(variable_x)+0.7*cos(2*variable_x)+0.5*sin(3*variable_x);
		
		yy = sin(variable_x+c);
		yy_ = sin(variable_x);
		derivada=(yy-yy_)/c;
		
		printf ("\n Los valores son: %f,\t %f \n La derivada es: %f", y, variable_x, derivada);
		
		variable_x=delta++;
		
	}
	
	return 0;
}
