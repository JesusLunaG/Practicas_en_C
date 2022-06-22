#include<stdio.h>
#include<math.h>
#define pi 3.141592

int main (){
	
	float radio, resultado;
	
	printf("Ingresa el radio de la circunferencia: ");
	scanf("%f",&radio);
	
	resultado= 2*pi*radio;
	
	printf("El resultado de la longitud de la circunferencia es: %f", resultado);
	
	return 0;
}
