#include<stdio.h>
#include<math.h>

int main(){
	
	double cateto1, cateto2, hipotenusa;
	
	printf("Ingresa el valor de cateto 1: ");
	scanf("%lf",&cateto1);
	printf("Ingresa el valor de cateto 2: ");
	scanf("%lf",&cateto2);
	
	hipotenusa= sqrt(((pow(cateto1,2))+(pow(cateto2,2))));
	
	printf("El valor de la hipotenusa es: %.2lf", hipotenusa);
	
	
	
	return 0;
}
