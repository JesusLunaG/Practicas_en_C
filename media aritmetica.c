#include<stdio.h>

int main(){
	
	float num1,num2,num3, media;

	
	printf("Ingrese el primer digito: "); scanf("%f",&num1);
	printf("Ingrese el segundo digito: "); scanf("%f",&num2);
	printf("Ingrese el tercer digito: "); scanf("%f",&num3);
	media= (num1+num2+num3)/3;
	printf("La media aritmetica es: %.2f", media);
	
	
	return 0;
}
