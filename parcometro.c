#include <stdio.h>

char zona[3];
double costoOrario;
int ore;

int main(void) {
	printf("Inserire zona: ");
	scanf("%s", zona);
  
	printf("Inserire costo orario: ");
	scanf("%lf", &costoOrario);
  
	printf("Inserire numero ore di sosta: ");
	scanf("%d", &ore);
  
	printf("Il ticket ha un costo totale di %.2lf\n", costoOrario * ore);
  return 0;
}
