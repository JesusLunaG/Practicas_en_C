#include<stdio.h>


int main(){
	
	float celsius, fahrenheit;
	
	printf("Ingrese los grados en Celsius: ");
	scanf("%f",&celsius);
	
	fahrenheit= celsius*1.8+32;
	
	printf("La conversion a grados Fahrenheit es: %.2f",fahrenheit);
	
	
	return 0;
}
