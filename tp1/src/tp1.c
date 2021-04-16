/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "pereira.h"


int main(void){
	setbuf(stdout, NULL);


	char salir = 'n';
	int x; //Primer operando
	int y; //Segundo operando
	int flagPrimerOperando = 0;
	int flagSegundoOperando = 0;
	int resultadoSuma;
	int resultadoResta;
	int divisionOk;
	float resultadoDivision;
	int resultadoMultiplicacion;
	int resultadoFactorialA;
	int resultadoFactorialB;
	int flagOperaciones = 0;


	do
	{

		switch(menu(x, y, flagPrimerOperando, flagSegundoOperando))
		{
			case 1:
				printf("Ingrese el primer operando: ");
				scanf("%d", &x);
				flagPrimerOperando = 1;
				system("pause");
				break;
			case 2:
				if(flagPrimerOperando)
				{
					printf("Ingrese el segundo operando: ");
					scanf("%d", &y);
					flagSegundoOperando = 1;
				}
				else
				{
					printf("Ingrese el primer operando antes que el segundo.\n");
				}
				system("pause");
				break;

			case 3:
				if(flagPrimerOperando && flagSegundoOperando)
				{
					resultadoSuma = sumar2numeros(x, y);
					resultadoResta = restar2numeros(x, y);
					divisionOk = dividirValidada(x, y, &resultadoDivision);
					resultadoMultiplicacion = multiplicar2numeros(x, y);
					resultadoFactorialA = factorizarNumero(x);
					resultadoFactorialB = factorizarNumero (y);
					flagOperaciones = 1;
					printf("\n");
					printf("Calculando las operaciones...\n");
				}
				else
				{
					printf("Primero debe ingresar los dos operandos.\n");
				}
				system("pause");
				break;
			case 4:
				if(flagOperaciones)
				{
					printf("a. El resultado de %d+%d = %d\n", x, y, resultadoSuma);
					printf("b. El resultado de %d-%d = %d\n", x, y, resultadoResta);
					if(divisionOk == 0)
					{
						printf("c. Error. No se puede dividir por 0.\n");;
					}
					else
					{
						printf("c. El resultado de %d/%d = %.2f\n", x, y, resultadoDivision);
					}
					printf("d. El resultado de %d*%d = %d\n", x, y, resultadoMultiplicacion);
					if(x < 0)
					{
						if(y < 0 )
						{
							printf("e. No se puede realizar ninguno de los factoriales (ambos numeros son negativos)\n");
						}
						else
						{
							printf("e. El factorial  de %d! no es posible calcular (es negativo) y el factorial de %d! es: %d\n", x, y, resultadoFactorialB);
						}
					}
					else
					{
						if (y < 0)
						{
							printf("e. El factorial  de %d! es:  %d y el factorial de %d! no es posible calcular (es negativo). \n", x, resultadoFactorialA, y);
						}
						else
						{
							printf("e. El factorial  de %d! es:  %d y el factorial de %d! es: %d\n", x, resultadoFactorialA, y, resultadoFactorialB);
						}
					}
					flagPrimerOperando = 0;
					flagSegundoOperando = 0;
					flagOperaciones = 0;
				}
				else
				{
					printf("Error. Se deben completar todos los pasos previos antes de poder mostrar los resultados.\n");
				}
				system("pause");
				break;
			case 5:
				printf("Desea salir? ");
				fflush(stdin);
				salir = getchar();
				break;
			default:
				printf("Error. Ingrese una opcion valida.\n");
				fflush(stdin);
				system("pause");
				break;
		}

	} while(salir == 'n');



	return EXIT_SUCCESS;
}
