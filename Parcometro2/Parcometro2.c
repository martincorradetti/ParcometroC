#include <stdio.h>

char zona[3];
double costoOrario;
int ore;

int main(void) {
	puts("Inserire zona: ");
	scanf("%s", zona);

	puts("Inserire costo orario");
	scanf("%lf", &costoOrario);

	puts("Inserire numero ore di sosta");
	scanf("%d", &ore);

	printf("Il ticket ha un costo totale di %.2lf", costoOrario * ore);

}

