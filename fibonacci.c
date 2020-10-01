#include <stdio.h>


int n,val1=0,val2=1,cont,fibonacci; //Se declaran los valores de tipo entero, no tienen algún valor asignado
int intentar;
int main(){
	//Se va a hacer un procedimiento el cual va a detenerse si el valor asignado es 1, y continuara si el valor es 0. 
	do{
	printf("Ingresa un numero:"); //Se le solicita al usuario hasta donde quiere llegar en el Fibonacci
	scanf("%i",&n);
	while(n<0){ //Mientras el valor agregado sea menor a 0, se le solicitara al usuario ingresar el numero dentro del rango de fjbonacci
		printf("Ingresa un numero mayor a 0:");
		scanf("%i",&n);
	}
	printf("[ 0 ,1 "); //Se imprimen los primeros dos valores de la serie
	for(cont=0;cont<n-1;cont++){ //El contador inicia desde cero hasta la cantidad menor a n-1 e ira en incremento
            fibonacci = val1 + val2; //El valor de fibonacci será la suma de val1 y val2 que mediante las iteraciones, cambiaran de valor
            printf(", %d",fibonacci); //Se imprime la serie
            val1 = val2; //Se van cambiando los valores
            val2 = fibonacci;
        }
    printf(" ]\n"); //Se hace un salto de linea
    val1=0; //Se reasignan los valores originales
	val2=1;
    printf("Quieres repetir el programa? [s=1/n=0]:"); //Se le solicita al usuario si quiere seguir con el procedimiento tecleando 2 numeros
	scanf("%i",&intentar);
	while(intentar<0 || intentar>1){ //Si los numeros agregados no son del rango [0,1], tienen que volverlo a hacer
		printf("Ingrese un numero del 0 y 1, no ingrese otro valor");
		scanf("%i",&intentar);
	}
	}while(intentar!=0);
	printf("¡Programa finalizado!"); //Termina el programa
	return 0;	
}
//Commit de prueba de Fernández Quiroz Félix Fernando
