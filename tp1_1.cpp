/*i) Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y devuelva por pantalla: 
 
(1) El contenido del puntero 
(2) La dirección de memoria almacenada por el puntero. 
(3) la dirección de memoria de la variable. 
(4) la dirección de de memoria del puntero.
(5) el tamaño de memoria utilizado por esa variable usando la función  sizeof()   
 Nota. Si resolvió correctamente los puntos 2 y 3 notará que el resultado es el mismo. ¿a qué se debe?  ¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿por qué? */
#include <stdio.h>
#include <stdlib.h>

void main(){
	int numero = 2;
	int *puntero = &numero;
	printf("El contenido del puntero es: %d\n",*puntero );
	printf("El puntero almacena la direccion de memoria: %p\n",puntero);
	printf("La direccion de memoria de la variable es: %p\n",&numero);
	printf("La direccion de memoria del puntero es %p\n",&puntero);
	printf("El espacio que usa la variable 'numero'es de %d bytes\n",sizeof(numero));
}