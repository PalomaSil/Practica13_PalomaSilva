/*Práctica#13                                                      Silva Rodríguez Paloma Mariel
  Fecha de entrega:20 de Enero de 2021*/
// 									Lectura y escritura de datos

/*El objetivo de este programa es que el usuario conteste una encuesta y generar un archivo .txt 
con dicha encuesta y sus respuestas y llevar el conteo de cúantos usuarios lo han hecho.*/

//Declaración de librerías
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define Texto_Maximo 100


//Declaración de variables globales: No hay

//Declaración de función: Función principal
int main(){
	
	//Declaración de variables locales
	//Uso de variables locales: Registrar las respuestas del usuario
	
	unsigned int cont=0, op, semestres;

	
	//Bloque de instrucciones 
	/*Este bloque es para ingresar las respuestas del usuario y así generar el archivo .txt*/
	
	printf("\t\t\t\t\t\t BIENVENIDO");
	printf("\n\n¿Desea contestar la encuesta?\n Si (1) / No (2): ");
	scanf("%i",&op);
	char L[Texto_Maximo], edad[9], C[Texto_Maximo], M[Texto_Maximo], D[20];

	printf("\n\nIngrese su nombre completo: ");
	FILE *p;
	p=fopen("ENCUESTA.txt","w+t");
	fputs("\t\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t\t\t\t ENCUESTA\n",p); 
	fputs("\n Nombre del usuario: ",p);
	scanf(" %[^\n]",&L);
	strupr(L);
	fputs(L,p);
	fputs("\n\n 1-¿Cuál es su edad?: ",p);
	printf("\n 1-¿Cual es su edad?: ");
	scanf(" %[^\n]",&edad);
	fputs(edad,p);
	fputs("\n\n 2-¿Qué carrera estás estudiando?: ",p);
	printf("\n 2-¿Que carrera estas estudiando?: ");
	scanf(" %[^\n]",&C);
	strupr(C);
	fputs(C,p);
	fputs("\n\n 3-¿Qué es lo que más te gusta de tu carrera?: ",p);
	printf("\n 3-¿Que es lo que más te gusta de tu carrera?: ");
	scanf(" %[^\n]",&M);
	strupr(M);
	fputs(M,p);
	fputs("\n\n 4-Define en una palabra tu carrera: ",p);
	printf("\n 4-Define en una palabra tu carrera: ");
	scanf(" %[^\n]",&D);
	strupr(D);
	fputs(D,p);
	fputs("\n\n 5-¿Cuántos semestres dura tu carrera?: ",p);
	printf("\n 5-¿Cuantos semestres dura tu carrera?: ");
	scanf(" %i",&semestres);
	fprintf(p,"%i", semestres);
	fputs("\n\n\n\n\n Gracias por contestar la encuesta. ",p);
	printf("\n\n\nGracias por contestar la encuesta.\n\n\n");
	fclose(p);
	cont++;
	printf("\n\nUSUARIOS QUE HAN CONTESTADO LA ENCUESTA: %i", cont);
	op=0;
	printf("\n\n¿Desea contestar la enuesta?\n Si (1) / No (2): ");
	scanf("%i",&op);
	do{
		char L[Texto_Maximo], edad[9], C[Texto_Maximo], M[Texto_Maximo], D[20];

		printf("\n\nIngrese su nombre completo: ");
		FILE *p;
		p=fopen("ENCUESTA.txt","a+");
		fputs("\n\n\n\t\t\t\t\t    UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO\n \t\t\t\t\t\t\t ENCUESTA\n",p); 
		fputs("\n Nombre del usuario: ",p);
		scanf(" %[^\n]",&L);
		strupr(L);
		fputs(L,p);
		fputs("\n\n 1-¿Cuál es su edad?: ",p);
		printf("\n 1-¿Cual es su edad?: ");
		scanf(" %[^\n]",&edad);
		fputs(edad,p);
		fputs("\n\n 2-¿Qué carrera estás estudiando?: ",p);
		printf("\n 2-¿Que carrera estas estudiando?: ");
		scanf(" %[^\n]",&C);
		strupr(C);
		fputs(C,p);
		fputs("\n\n 3-¿Qué es lo que más te gusta de tu carrera?: ",p);
		printf("\n 3-¿Que es lo que más te gusta de tu carrera?: ");
		scanf(" %[^\n]",&M);
		strupr(M);
		fputs(M,p);
		fputs("\n\n 4-Define en una palabra tu carrera: ",p);
		printf("\n 4-Define en una palabra tu carrera: ");
		scanf(" %[^\n]",&D);
		strupr(D);
		fputs(D,p);
		fputs("\n\n 5-¿Cuántos semestres dura tu carrera?: ",p);
		printf("\n 5-¿Cuantos semestres dura tu carrera?: ");
		scanf(" %i",&semestres);
		fprintf(p,"%i", semestres);
		fputs("\n\n\n\n\n Gracias por contestar la encuesta. ",p);
		printf("\n\n\nGracias por contestar la encuesta.\n\n\n");
		fclose(p);
		cont++;
		printf("\n\nUSUARIOS QUE HAN CONTESTADO LA ENCUESTA: %i", cont);
		op=0;
		printf("\n\n¿Desea contestar la encuesta?\n Si (1) / No (2): ");
		scanf("%i",&op);
	}while (op==1);
	printf("USUARIOS QUE HAN CONTESTADO LA ENCUESTA: %i",cont);
	return 0;
	
}
