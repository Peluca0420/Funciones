#include<stdio.h>
#include<windows.h>
#include <stdlib.h>

//VARIABLES
int opc;
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
float division(float x, float y);

int main()
{
	do{
		printf("Elija una opcion:\n  -Suma           (1)\n  -Resta          (2)\n  -Multiplicacion (3)\n  -Division       (4)\n\n");
		scanf("%d", &opc);
		system("cls");
	}while(opc>4||opc<1);
	switch(opc){
		
		//SUMA
		case 1:
			int a;
			int b;
				printf("SUMA\n");
				printf("\nEl resultado es %d", suma(a,b));
		break;
		
		//RESTA
		case 2:
				printf("RESTA\n");
				printf("\nEl resultado es %d", resta(a,b));
		break;
		
		//MULTIPLICACION
		case 3: 
				printf("MULTIPLICACION\n");
				printf("\nEl resultado es %d", multiplicacion(a,b));
		break;
		
		//DIVISION
		case 4: 
			float x;
			float y;
				printf("DIVISION\n");
				printf("\nel resultado es %f", division(x,y));
		break;
	}
	
		return 0;
}
	int suma(int a, int b)
{
	int resultadoR;
		printf("Ingrese el primer valor: ");
		scanf("%d", &a);
		printf("Ingrese el segundo valor: ");
		scanf("%d", &b);
		resultadoR = a+b;
	return resultadoR;
}
	int resta(int a, int b)
{
	int resultadoR;
		printf("Ingrese el primer valor: ");
		scanf("%d", &a);
		printf("Ingrese el segundo valor: ");
		scanf("%d", &b);
		resultadoR = a-b;
	return resultadoR;
}
	int multiplicacion(int a, int b)
{
	int resultadoR;
		printf("Ingrese el primer valor: ");
		scanf("%d", &a);
		printf("Ingrese el segundo valor: ");
		scanf("%d", &b);
		resultadoR = a*b;
	return resultadoR;
}
	float division(float x, float y)
{
	float resultadoF;
		printf("Ingrese el numerador: ");
		scanf("%f", &x);
		printf("Ingrese el denominador: ");
		scanf("%f", &y);
		resultadoF = x/y;
	return resultadoF;
}
