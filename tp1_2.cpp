/*Resuelva las siguientes tareas mediante el uso de funciones: 
v) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor. 
vi) Utilice la función anterior para leer pares de valores e imprimirlos por pantalla de forma ordenada.  */
#include <stdio.h>
#include <stdlib.h>
//-PROTOTIPOs-//
int Cuadrado1(int num1);
void Cuadrado2(int *punt_numero);
void Muestra(int *punt_numero);
void Invertir(int *num1, int *num2);
void Ordenar (int *num1,int *num2);
//--------------------------------------//
void main(){
	
	int numero1 = 4, numero2 = 5 , a = 1 ,b = 40, c , d;
	printf("El cuadrado de %d es %d\n\n" ,numero1,Cuadrado1(numero1));
	
	int *puntero = &numero2;
	printf("El cuadrado de %d es ",numero2);
	Cuadrado2(&numero2);
	printf("%d\n\n",*puntero);

	Muestra(&numero1);
	
	Invertir(&a,&b);

	Ordenar(&a,&b);

	for (int i = 0; i < 1; ++i){
		puts("Ingrese 2 numeros:");
		scanf("%d %d",&c,&d);
		Ordenar(&c,&d);
	}
}
//Haga una función que devuelva el cuadrado de un número 
int Cuadrado1(int num1){
	return num1 * num1;
}

//Haga la función anterior, pero devolviendo un tipo void 
void Cuadrado2(int *punt_numero){
	*punt_numero = *punt_numero * *punt_numero;
}

//Al recibir una variable muestre por pantalla la dirección y el contenido de la variable 
void Muestra(int *punt_numero){
	printf("La direccion de memoria de %d es %p\n\n",*punt_numero,punt_numero);
}

//Dado dos parámetros de entrada, deberá invertir los valores entre ambos. void Invertir(a,b)  
//deberá devolver en el valor de a en la variable b y en b el valor de a 
void Invertir(int *num1, int *num2){
	int *punt_aux;
	printf("Los numeros enviados son %d y %d\n",*num1,*num2);
	punt_aux = num1;
	num1 = num2;
	num2 = punt_aux;
	printf("Los numeros invertidos son %d y %d\n\n",*num1,*num2);
}
//Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, 
//en el primer parámetro el menor y en el segundo el mayor
void Ordenar (int *num1,int *num2){
	int *num_aux;
	if (*num1>*num2){
		printf("Los numeros ingresados son a = %d y b = %d,",*num1,*num2);
		printf(" de ellos %d es mayor que %d\n",*num1,*num2);
	}
	else if (*num2>*num1){
		num_aux = num1;
		num1 = num2;
		num2 = num_aux;
		printf("Los numeros ingresados son a = %d y b = %d,",*num1,*num2);	
		printf(" de ellos a  =%d es mayor que b = %d\n",*num1,*num2);
	}
	else{
		printf("Los numeros ingresados son %d y %d y son iguales\n",*num1,*num2);
	}
}
//Utilice la función anterior para leer pares de valores e imprimirlos por pantalla de forma ordenada
