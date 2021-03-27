#include <stdio.h>

int main() {
	char nombres[3][30];
	int numero1 = 5;
	char numero_caracter = (char)numero1;
	printf("s%", numero_caracter);

	return 0; //Buena practica.
}