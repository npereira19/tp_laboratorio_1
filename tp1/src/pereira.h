

#ifndef PEREIRA_H_
#define PEREIRA_H_


/** \brief muestra el mennu del proyecto en ejecucion.
 *
 * \param a int primer valor ingresado que evaluará el menú.
 * \param b int	segundo valor ingresado que evaluará el menú.
 * \param flag1 int	control de ingreso del primero valor.
 * \param flag2 int control de ingreso del segundo valor.
 * \return int devuelve la opción (el numero) elegida por el usuario que evaluará el switch.
 *
 */
int menu(int a, int b, int flag1, int flag2);

/** \brief muestra el resultado de la suma entre 2 valores.
 *
 * \param a int primer valor ingresado.
 * \param b int segundo valor a sumar.
 * \return int devuelve el resultado de la suma entre ambos parametros.
 *
 */
int sumar2numeros(int a, int b);

/** \brief muestra el resultado de la resta entre 2 valores.
 *
 * \param a int primer valor ingresado.
 * \param b int segundo valor ingresado.
 * \return int devuelve el resultado de la resta entre ambos parametros.
 *
 */
int restar2numeros(int a, int b);

/** \brief muestra el resultado de la division entre 2 valores.
 *
 * \param a int primer valor ingresado.
 * \param b int segundo valor ingresado.
 * \return float devuelve el resultado de la division entre ambos parametros.
 *
 */
float dividir2numeros(int a, int b);

/** \brief muestra el resultado de una division y valida que la misma sea posible de realizar.
 *
 * \param a int primer valor ingresado.
 * \param b int segundo valor ingresado.
 * \param c float* resultado de la division entre ambos parametros.
 * \return int devuelve 1 si la division es posible de realizar o un 0 si la division no puede realizarse.
 *
 */
int dividirValidada(int a, int b, float* c);

/** \brief muestra el resultado de la multiplicacion entre 2 valores
 *
 * \param a int primer valor ingresado.
 * \param b int segundo valor ingresado.
 * \return int devuelve el resultado de la multiplicacion entre ambos parametros
 *
 */
int multiplicar2numeros(int a, int b);

/** \brief muestra el factorial del numero ingresado.
 *
 * \param a int valor a calcular su factorial.
 * \return int devuelve el valor del factorial del numero.
 *
 */
int factorizarNumero(int a);


#endif /* PEREIRA_H_ */
