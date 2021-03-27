#include <stdio.h>

//Este algoritmo lee 10 jugadores
/*
Despues pregunta que dato queremos Ej: Nombre, Edad, Altura
tercero muestra una lista conformada por ese tipo de dato
*/

/*  Imprimir datos.
%i int
%f float
%c char 'a'
%d decimal
%li long 
%lf double
*/

/*	Imprimir varios valores
* int i = 5;
* char c = 'A';
* float f = 56.4524;
* printf("%i %c %f",i,c,f)
*/

/*Ingresar numero

	scanf_s("%i",&edad);
	scanf_s("%f",&altura);

* Pero mejor usar gets
	char nombre[50];
	gets(nombre);
*/

/*Asignar valores a un Struct
	struct futbolista jp_1 = { "Pedro" ,55 ,1.83 };
* alternativa
	jp_1.edad = 5;
*Usando puntero.
	struct futbolista *ptr;
	ptr = &jp_1;
	ptr->edad= 5;
Asignar un numero string por medio de copy
	strcpy(jp_1.nombre, "Juan" );
Asignar un string con Punteros (Cuando quieres un tamaño variable)

char* ptr_nombre = "prueba";
jp_1.nombre = malloc(strlen(ptr_nombre) + 1);
strcpy(jp_1.nombre, ptr_nombre);
free (p.nombre); //Libera el puntero
*/

/*Hacer cast
* int numero = 55;
* double decimal;
* decimal = (double) numero;


*/

/*Declarar matriz
char jugadores[3][50];
	Int matriz[F][C];
	Filas, Columnas
*/


struct futbolista {
	char    nombre[30];
	int     edad;
	float   altura;
};
/*
void ingresar() {
	printf("Ingrese un juegador \n");
	int i = 0;
	char nombre[30];
	while (i <= 10) {
	//while (i <= 3) {
		printf("Nombre Nº%i", i);
		gets(nombre);


	};

}*/

/*Imprime varios espacios y "borra" la pantalla*/
void limpiar_Pantalla() {
	int indice = 0;
	while (indice < 30) {
		printf("\n");
		indice += 1;
	};

}


int main() {
	printf("Bienvenido Al codigo de Enrique Emmanuel Rios Chyrnia");
	printf("\n");
	printf("Introduzca una lista de 10 jugadores");
	printf("\n");
	//-------------Variables-------------------
	struct futbolista jugadores[3];

	char	nombre[50];
	int		edad=0;
	float	altura = 0.0;
	
	//------------Carga de jugadores-----------
	int i;
	i = 0;
	while (i <= 3){
		//nombre
		printf(" nombre: ");
		gets(nombre);
		printf("\n");
		strcpy(jugadores[i].nombre, nombre);

		//edad
		printf(" edad: ");
		scanf_s("%i",&edad);
		printf("\n");
		jugadores[i].edad = edad;

		//altura
		printf(" altura: ");
		scanf_s("%f",&altura);
		printf("\n");
		jugadores[i].altura = altura;

		i += 1;
		limpiar_Pantalla();
	}

		limpiar_Pantalla();//Limpiamos la pantalla.
	i = 0; //Reiniciamos el indice
	//Mostremos los jugadores.

	while (i <= 3) {
		printf("Jugador 1: \n%s %i %.2f", jugadores[i].nombre, jugadores[i].edad, jugadores[i].altura);
		i = i + 1;
	}


	//ingresar();

	return 0;
}

/*	Codigo crear a un futbolista. Y alterar sus datos.
struct futbolista jp_1 = { "Pedro" ,55 ,1.83 };
	//jp_1.nombre = "Pedro";
	jp_1.edad = 65;
	jp_1.altura = 2.5;
	strcpy(jp_1.nombre, "Juan");

	printf("%s  %i  %.2f", jp_1.nombre, jp_1.edad, jp_1.altura);
*/

