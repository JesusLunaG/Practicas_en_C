#include<stdio.h>


int main(){
	int base_mayor, base_menor, altura,area;
	
	printf("Ingrese el area mayor: ");
	scanf("%i",&base_mayor);
	printf("Ingrese el area menor: ");
	scanf("%i",&base_menor);
	printf("Ingrese la altura: ");
	scanf("%i",&altura);
	
	area=  ((base_mayor+base_menor)*altura)/2;
	
	printf("\nEl area del trapecio es: %i",area);
	
	
	
	return 0;
}
