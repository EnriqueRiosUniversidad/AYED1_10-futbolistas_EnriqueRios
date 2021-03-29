#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Este algoritmo lee a 10 jugadores.
//Luego el usuario elige si quiere mostrar nombres, edades o alturas.

struct futbolista {
	char    nombre[30];
	int     edad;
	float   altura;
};
void cargar(struct futbolista* jugador);
void imprimir(struct futbolista jugadores[], int disicion);


int main() {
	printf("Bienvenido Al codigo de Enrique Emmanuel Rios Chyrnia");
	printf("\n");
	printf("Introduzca una lista de 10 jugadores");
	printf("\n");
	//-------------Variables-------------------
	struct futbolista jugadores[3] = { NULL };
	int indice = 0;

	//------------Carga de jugadores-----------
	
	while (indice < 10) {
		cargar(&jugadores[indice]);
		indice = indice + 1;
	}
	//------------Muestra de jugadores---------
	printf("Muy bien, y ahora que desea hacer.");
	printf("\n [1] Ver lista nombres");
	printf("\n [2] Ver lista edades");
	printf("\n [3] Ver lista alturas");
	printf("\n        ");

	scanf_s("%i", &indice); //Lee la respuesta del usuario.

	imprimir(jugadores, indice);

	return 0;
}




//Declaracion de variables.
void cargar(struct futbolista* jugador) {
	//struct futbolista jugador;
	char	nombre[50], residuo;
	int		edad = 0;
	float	altura = 0.0;

	//nombre
	printf(" nombre: ");
	gets(nombre);

	//edad
	printf(" edad: ");
	scanf_s("%i", &edad);

	//altura
	printf(" altura: ");
	scanf_s("%f", &altura);

	//Se genera un \n despues de leer un numero.
	scanf_s("%c", &residuo); //Elimina el \n tan molesto

	strcpy_s(jugador->nombre, sizeof(nombre), nombre);
	jugador->edad = edad;
	jugador->altura = altura;

	strcpy_s(nombre, sizeof(nombre), "");
	edad = 0;
	altura = 0;
};

void imprimir(struct futbolista jugadores[], int disicion) {

	int i = 0;
	switch (disicion) {
	case 1: while (i < 10) { //Nombres
		printf("N_[% i]  %s", i, jugadores[i].nombre);
		printf("\n");
		i = i + 1;
	};break;

	case 2: while (i < 10) {//Edades
		printf("N_[%i]  %i", i, jugadores[i].edad);
		printf("\n");
		i = i + 1;
	};break;

	case 3: while (i < 10) {//alturas
		printf("N_[%i]  %0.2f", i, jugadores[i].altura);
		printf("\n");
		i = i + 1;
	};break;
	default: break;
	};

};