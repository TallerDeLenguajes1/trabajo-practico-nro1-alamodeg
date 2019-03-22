/*Resuelva las siguientes tareas mediante el uso de funciones: 
i) Haga una función que devuelva el cuadrado de un número 
ii) Haga la función anterior, pero devolviendo un tipo void 
iii) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable  
iv) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.   void Invertir(a,b)  //deberá devolver en el valor de a en la variable b y en b el valor de a 
v) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor. 
vi) Utilice la función anterior para leer pares de valores e imprimirlos por pantalla de forma ordenada.  */
#include <stdio.h>
#include <stdlib.h>
//-PROTOTIPOs-//
int cuadrado(int *num);
//------------//
void main(){
	int numero = 4;
	int *puntero= &numero;

	//resultado = cuadrado(numero);
	printf("El resultado de %d al cuadrado es: ",numero);
	cuadrado(puntero);
	printf("%d",*puntero);

}
int cuadrado(int *num){
	return *num = *num * *num;
}