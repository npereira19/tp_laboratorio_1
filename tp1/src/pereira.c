#include <stdio.h>
#include <stdlib.h>
#include "pereira.h"

int menu(int a, int b, int flag1, int flag2)
{
    int opcion;


    system("cls");

    printf("                  Menu de calculadora             \n\n");

    if (flag1)
    {
        printf("1. Ingresar primer operando (A = %d)\n", a);
    }
    else
    {
        printf("1. Ingresar el primer operando (A = x)\n");
    }
    if(flag2)
    {
        printf("2. Ingresar segundo operando (B = %d)\n", b);
    }
    else
    {
        printf("2. Ingresar segundo operando (B = y)\n");
    }
    printf("3. Calcular todas las operaciones: \n");
    if(flag1 == 0)
    {
        if(flag2 == 0)
        {
        printf("            a. Calcular la suma. (A + B) \n");
        printf("            b. Calcular la resta. (A - B) \n");
        printf("            c. Calcular la division. (A / B) \n");
        printf("            d. Calcular la multiplicacion. (A * B) \n");
        printf("            e. Calcular el factorial. (A! y B!) \n");
        printf("4. Informar los resultados.\n");
        printf("5. Salir\n\n");
        }
    }
    else
    {
        if(flag2 == 0)
        {
        printf("            a. Calcular la suma. (%d + B) \n",a);
        printf("            b. Calcular la resta. (%d - B) \n",a);
        printf("            c. Calcular la division. (%d / B) \n",a);
        printf("            d. Calcular la multiplicacion. (%d * B) \n",a);
        printf("            e. Calcular el factorial. (%d! y B!) \n",a);
        printf("4. Informar los resultados.\n");
        printf("5. Salir\n\n");
        }
        else
        {
        printf("            a. Calcular la suma. (%d + %d) \n",a,b);
        printf("            b. Calcular la resta. (%d - %d) \n",a,b);
        printf("            c. Calcular la division. (%d / %d) \n",a,b);
        printf("            d. Calcular la multiplicacion. (%d * %d) \n",a,b);
        printf("            e. Calcular el factorial. (%d! y %d!) \n",a,b);
        printf("4. Informar los resultados.\n");
        printf("5. Salir\n\n");
        }
    }

    printf("Ingrese la opcion: ");
    scanf("%d", &opcion);

    return opcion;
}



int sumar2numeros(int a, int b)
{
    int resultadoSuma;

    resultadoSuma = a + b;

    return resultadoSuma;
}

int restar2numeros(int a, int b)
{
    int resultadoResta;

    resultadoResta = a - b;

    return resultadoResta;

}
int dividirValidada (int a, int b, float* c)
{
    int todoOk=0;

    if(b != 0 && c != NULL)
    {
        *c = (float) a / b;
        todoOk=1;
    }
    return todoOk;
}

float dividir2numeros(int a, int b)
{
    float resultadoDivision;

    resultadoDivision = (float) a / b;

    return resultadoDivision;
}

int multiplicar2numeros(int a, int b)
{
    int resultadoMultiplicacion;

    resultadoMultiplicacion = a * b;

    return resultadoMultiplicacion;
}

int factorizarNumero(int a)
{

    int fact = 1;
    for(int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}


